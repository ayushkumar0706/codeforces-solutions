#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}

sort(arr,arr+n);
vector<int>cont;

int ans=1;
for(int i=0;i<n-1;i++){
if(arr[i+1]-arr[i]<=k)
ans++;
else{
    cont.push_back(ans);
    ans=1;
}
}
if(ans>1)
cont.push_back(ans);

for(int i=0;i<cont.size();i++){
    if(cont[i]>ans)
    ans=cont[i];
}

cout<<n-ans<<endl;
}
}