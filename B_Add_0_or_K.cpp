#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
long long n, k;
cin>>n>>k;
vector<long long>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];

arr[i] = (arr[i] + (arr[i]%(k+1))*k);
cout<<arr[i]<<" ";
}

cout<<endl;
}
}