#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        vector<int> ans(n, 0);
        map<int, int> pos;
        int prev = 0, nxt = 1;

        for (int i = 0; i < n; i++) {
            int diff = v[i] - prev;
            prev = v[i];
            if (diff == i + 1) {
                ans[i] = nxt;
                pos[i] = nxt;
                nxt++;
            } else {
                int p = i - diff;
                if (p >= 0 && pos.count(p)) {
                    int val = pos[p];
                    ans[i] = val;
                    pos.erase(p);
                    pos[i] = val;
                } else {
                    ans[i] = 0;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}