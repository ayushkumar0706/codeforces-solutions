#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n), brr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
            cin >> brr[i];

        multiset<int> ms;
        for (int i = 0; i < n; i++)
            ms.insert(brr[i]);

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= k)
                continue;
            int x1 = k - arr[i];
            int d1 = arr[i] + 1;
            int maxi = x1 / d1;
            if (maxi >= 1)
            {
                auto it = ms.lower_bound(0);
                it = ms.upper_bound(maxi);
                if (it != ms.begin())
                {
                    it--;
                    if (*it <= maxi)
                    {
                        ans++;
                        ms.erase(it);
                    }
                }
            }
        }
        cout << ans << endl;
    }
}