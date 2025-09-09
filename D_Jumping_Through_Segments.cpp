#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool check(int k, int n, vector<vector<int>> &arr) {
    int l = max(arr[0][0], 0LL);
    int r = min(arr[0][1], k);
    if (l > r) return false; 

    for (int i = 1; i < n; ++i) {
        int seg_l = arr[i][0], seg_r = arr[i][1];
        l = max(seg_l, l - k);
        r = min(seg_r, r + k);
        if (l > r) return false;
    }

    return true;
}

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
        vector<vector<int>> arr(n, vector<int>(2));
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i][0];
            cin >> arr[i][1];
        }

        int ans = 1e9;
        int start = 0, end = 1e9;
        while (start <= end)
        {
            int k = start + (end - start) / 2;
            if (check(k, n, arr))
            {
                ans = min(ans, k);
                end = k - 1;
            }
            else
            {
                start = k + 1;
            }
        }

        cout << ans << endl;
    }
}