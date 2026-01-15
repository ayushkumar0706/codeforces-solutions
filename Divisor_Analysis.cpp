#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

const int mod = 1000000007;

int modpow(int a, int b) {
    int res = 1;
    a %= mod;
    while(b > 0) {
        if(b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n;
cin >> n;
int ans = 1, ans1 = 1, ans2 = 1;
int divCount = 1;
const int phi = mod - 1;
while(n--){
int x, k;
cin >> x >> k;

int num = (modpow(x, k+1) - 1 + mod) % mod;
int den = modpow(x-1, mod-2);
ans1 = (ans1 * (num * den % mod)) % mod;

int sumExp = ((k * (k+1)) / 2) % phi;
int p = modpow(x, sumExp);
int q = modpow(p, divCount);
int r = modpow(ans2, k+1);
ans2 = (q * r) % mod;

divCount = (divCount * (k+1)) % phi;
ans = (ans * (k+1)) % mod;
}

cout << ans << " " << ans1 << " " << ans2 << endl;
}
