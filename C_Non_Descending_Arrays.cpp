#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int mod = 998244353;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int dp[2] = {1, 1};
        if (n == 1)
        {
            cout << (dp[0] + dp[1]) % mod << endl;
            continue;
        }

         for (int i = 0; i < n - 1; ++i) {
        int nxt0 = 0, nxt1 = 0;
        for (int j = 0; j < 2; ++j) {
            long long crnt1, crnt2;
            if (j == 0) {
                crnt1 = a[i];
                crnt2 = b[i];
            } else {
                crnt1 = b[i];
                crnt2 = a[i];
            }

            for (int k = 0; k < 2; ++k) {
                long long nextf, nexts;
                if (k == 0) {
                    nextf = a[i + 1];
                    nexts = b[i + 1];
                } else {
                    nextf = b[i + 1];
                    nexts = a[i + 1];
                }

                if (crnt1 <= nextf && crnt2 <= nexts) {
                    if (k == 0)
                        nxt0 = (nxt0 + dp[j]) % mod;
                    else
                        nxt1 = (nxt1 + dp[j]) % mod;
                }
            }
        }
        dp[0] = nxt0;
        dp[1] = nxt1;
    }

        cout << (dp[0] + dp[1]) % mod << endl;
    }
}