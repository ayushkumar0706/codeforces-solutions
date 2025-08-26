#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
long long mod = 1e9 + 7;
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;

long long ans ;
ans = ((((n * (n+1)) % mod) * (4*n-1)) % mod * 337) % mod;

cout<<ans<<endl;

}
}