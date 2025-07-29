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

int neg=0,pos=0;
for(int i=0;i<n;i++){
    if(arr[i]==1)
    pos++;
    else
    neg++;
}
int ans=0;
if(neg%2!=0){
    pos++;
    neg--;
    ans++;
}
while(pos<neg){
    neg-=2;
    pos+=2;
    ans+=2;
}

cout<<ans<<endl;
}
}