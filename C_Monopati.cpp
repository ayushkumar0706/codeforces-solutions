#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> top(n), bot(n);
        for (int i = 0; i < n; ++i)
            cin >> top[i];
        for (int i = 0; i < n; ++i)
            cin >> bot[i];

        vector<int> pre(n), pre1(n);
        pre[0] = top[0];
        pre1[0] = top[0];
        for (int i = 1; i < n; ++i)
        {
            pre[i] = min(pre[i - 1], top[i]);
            pre1[i] = max(pre1[i - 1], top[i]);
        }

        vector<int> suf(n), suf1(n);
        suf[n - 1] = bot[n - 1];
        suf1[n - 1] = bot[n - 1];
        for (int i = n - 2; i >= 0; --i)
        {
            suf[i] = min(suf[i + 1], bot[i]);
            suf1[i] = max(suf1[i + 1], bot[i]);
        }

        vector<pair<int, int>> pairs;
        pairs.reserve(n);
        for (int k = 0; k < n; ++k)
        {
            int mn = min(pre[k], suf[k]);
            int mx = max(pre1[k], suf1[k]);
            pairs.emplace_back(mn, mx);
        }

        sort(pairs.begin(), pairs.end(), [](const pair<int, int> &a, const pair<int, int> &b)
             {
            if (a.first != b.first) return a.first > b.first;
            return a.second < b.second; });

        const int X = 2 * n;
        int idx = 0;
        long long ans = 0;
        multiset<int> s;
        for (int l = X; l >= 1; --l)
        {

            while (idx < (int)pairs.size() && pairs[idx].first >= l)
            {
                s.insert(pairs[idx].second);
                ++idx;
            }
            if (!s.empty())
            {
                int R = *s.begin(); 
                if (R <= X)
                    ans += (X - R + 1);
            }
        }

        cout << ans << '\n';
    }
}