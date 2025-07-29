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
int cnt=0;
for(int i=0;i<n;i++){
    if(arr[i]<=i||(2*i)+1>arr[i]||2*(n-1-i)+1>arr[i]){
        cnt=1;
        break;
    }
}

if(cnt==0)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
}