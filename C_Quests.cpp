#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n, k;
cin>>n>>k;
vector<int>arr(n), brr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

for(int i=0;i<n;i++){
cin>>brr[i];
}

vector<int>maxi(n, brr[0]);
for(int i=1; i<n; i++){
    maxi[i] = max(maxi[i-1], brr[i]);
}

long long ans = 0, sum = 0;
for(int i=0; i<n && i<k; i++){
    sum += arr[i];
    ans = max(ans, (sum + ((k-i-1) *1ll* maxi[i])));
}

cout<<ans<<endl;
    
}
}