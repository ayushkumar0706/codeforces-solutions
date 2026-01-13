#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int mod = 1e9 + 7;
int exp(int n, int x){
    if(x == 1)
    return n%mod;
    if(x == 0)
    return 1;
    if(n == 0)
    return 0;

    int half = exp(n, x/2);
    int res = (half * half)%mod;

    if(x%2)
    res = (n * res)%mod;
    return res;
}

signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--){
int n, x;
cin>>n>>x;

int ans = exp(n, x);
cout<<ans<<endl;
    
}
}