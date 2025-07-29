#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long t;
cin>>t;
while(t--){
long long x, y, k;
cin>>x>>y>>k;

long long mul = (k + (k*y)) - x;
long long ans = (k+1);

if(mul > 0)
ans += (mul/(x-1)) + (mul%(x-1) > 0);

cout<<ans<<endl;
}
}