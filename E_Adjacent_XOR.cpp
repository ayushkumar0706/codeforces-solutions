#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>arr(n), brr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
cin>>brr[i];
}

if(arr[n-1] != brr[n-1]){
    cout<<"NO"<<endl;
    continue;
}

int cnt = 0;
for(long long i=n-2; i>=0; i--){
    if(arr[i] == brr[i] || brr[i] == (arr[i]^arr[i+1]) || brr[i] == (arr[i]^brr[i+1])){}
    else {cnt = 1;
    break;}
}

if(cnt)
cout<<"NO"<<endl;
else cout<<"YES"<<endl;
    
}
}