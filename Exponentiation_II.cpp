#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int mod = 1e9 + 7;
int exp(int n, int x, int m){
    if(x == 0)
    return 1;

    int half = exp(n, x/2, m);
    int res = (half * half)%m;

    if(x%2)
    res = (n * res)%m;
    return res;
}

signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--){
int a, b, c;
cin>>a>>b>>c;

int x = exp(b, c, mod-1);
int ans = exp(a, x, mod);

cout<<ans<<endl;
    
}
}