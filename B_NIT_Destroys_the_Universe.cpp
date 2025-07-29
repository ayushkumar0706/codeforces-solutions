#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}

int zero=0,ans=1;
int cnt=0;
for(int i=0;i<n;i++){
    if(arr[i]!=0){
        zero=1;
        if(cnt==0)
        cnt=1;
        else if(cnt==2)
        cnt=3;
    }
    else if(arr[i]==0&&cnt==1){
        cnt=2;
    }

if(cnt==3){
ans++;
cnt=1;
}
}

if(zero==1){
if(ans==1)
cout<<ans<<endl;
else
cout<<"2"<<endl;
}
else
cout<<zero<<endl;
}
}