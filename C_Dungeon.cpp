#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
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
        int n, m;
        cin >> n >> m;
        vector<int> arr(n), brr(m), crr(m);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < m; i++)
            cin >> brr[i];
        for (int i = 0; i < m; i++)
            cin >> crr[i];

        vector<pair<int, int>> v;
        vector<int> temp;
        for (int i = 0; i < m; ++i)
        {
            if (crr[i] == 0)
                temp.push_back(i);
            else
                v.push_back({brr[i], crr[i]});
        }

        sort(arr.begin(), arr.end());
        sort(v.begin(), v.end());
        multiset<int> st(arr.begin(), arr.end());
        int ans = 0;

        for (auto &idx : v)
        {
            int x = idx.first, y = idx.second;
            auto it = st.lower_bound(x);
            if (it != st.end())
            {
                int dam = *it;
                st.erase(it);
                st.insert(max(dam, y));
                ans++;
            }
        }

        for (int idx : temp)
        {
            int x = brr[idx];
            auto it = st.lower_bound(x);
            if (it != st.end())
            {
                st.erase(it);
                ans++;
            }
        }

        cout << ans << endl;
    }
}
