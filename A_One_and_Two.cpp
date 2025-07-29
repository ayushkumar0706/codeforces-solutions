#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n],to=0;
for(int i=0;i<n;i++){
cin>>arr[i];
if(arr[i]==2)
to++;
}
if(to==0){
    cout<<"1"<<endl;
    continue;
}
vector<int>pre(n,0);
vector<int>suf(n,0);
int preto=0,sufto=0;

for(int i=0;i<n;i++){
    if(arr[i]==2){
    preto++;
    pre[i]=preto;
    }
}

for(int i=n-1;i>=0;i--){
    if(arr[i]==2){
    sufto++;
    suf[i]=sufto;
    }
}

int k=-1;
for(int i=0;i<n;i++){
    if(suf[i]-pre[i]==1&&suf[i]>0&&pre[i]>0){
        k=i+1;
        break;
    }
}

cout<<k<<endl;
}
}