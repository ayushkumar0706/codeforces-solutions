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

int ans=0,odd=0,even=0;
for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        even++;
        if(odd>0)
        ans+=odd-1;
        odd=0;
    }
    else{
    odd++;
    if(even>0)
    ans+=even-1;
    even=0;
    }
}

if(even)
ans+=even-1;
if(odd)
ans+=odd-1;

cout<<ans<<endl;
}
}