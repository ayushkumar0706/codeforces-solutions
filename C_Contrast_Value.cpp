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
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if(ans.empty() || ans.back()!=arr[i]) ans.push_back(arr[i]);
        }

        int m = ans.size();
        int result = m;
        for (int i = 0; i < m - 2; i++)
        {
            result -= ((ans[i] < ans[i + 1]) && (ans[i + 1] < ans[i + 2]));
            result -= ((ans[i] > ans[i + 1]) && (ans[i + 1] > ans[i + 2]));
        }

        cout << result << endl;
    }
}