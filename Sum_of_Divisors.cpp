#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

const int mod = 1e9 + 7;
const int inv2 = (mod + 1)/2;

signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n;
cin>>n;

int ans = 0;
for(int i=1; i<=n; i++){
    int q = n/i;
    int r = n/q;
    int temp = (((r-i+1)%mod)*((i+r)%mod))%mod;
    int sum = (temp * inv2)%mod;

    ans = (ans + (q%mod * sum)%mod)%mod;
    i = r;
}

cout<<ans<<endl;
 
}