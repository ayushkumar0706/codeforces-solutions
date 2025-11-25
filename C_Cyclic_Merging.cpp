#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        int total = 0;
        int best = 0;
        for (int i = 0; i < n; ++i) {
            int j = (i + 1) % n;
            int cur = max(a[i], a[j]);
            total += cur;
            best = max(best, cur);
        }

        cout << (total - best) << endl;
    }
}