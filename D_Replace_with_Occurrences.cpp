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
        vector<int> arr(n), ans(n);
        map<int, int> mp;
        map<int, vector<int>> index;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
            index[arr[i]].push_back(i);
        }

        int sum = 0;
        for (auto it : mp)
        {
            sum += it.second;
            if ((it.second % it.first) != 0)
            {
                sum = n + 1;
                break;
            }
        }

        if (sum > n)
        {
            cout << "-1" << endl;
            continue;
        }

        int cnt = 0;

        for (auto &it : index)
        {
            int fir = it.first;
            auto sec = it.second;
            for (int i = 0; i < sec.size(); i += fir)
            {
                cnt++;
                for (int j = 0; j < fir; j++)
                {
                    ans[sec[i + j]] = cnt;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] <<" ";
        }
        
        cout<<endl;
    }
}