#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b==0)
    return a;

   return gcd(b,a%b);
}

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

int ans=0;
for(int i=0;i<n;i++){
    if(abs(arr[i]-i-1)!=0){
        if(ans!=0)
        ans=gcd(ans,abs(arr[i]-i-1));
        else
        ans=abs(arr[i]-i-1);
    }
}

cout<<ans<<endl;
}
}