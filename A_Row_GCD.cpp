#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long n, m;
cin>>n>>m;
vector<long long>arr(n), brr(m);
for(int i=0; i<n; i++)
cin>>arr[i];

for(int j=0; j<m; j++)
cin>>brr[j];

vector<long long>ans(m);

long long g = 0;
for(int i=1; i<n; i++){
    g = __gcd(g, abs(arr[i] - arr[0]));
}


for(int i=0; i<m; i++){
    ans[i] = __gcd(g, (arr[0]+brr[i]));
    cout<<ans[i]<<" ";
}
cout<<endl;
}