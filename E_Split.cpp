#include <bits/stdc++.h>
#include <cstdint>
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
        vector<int> arr(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        int cnt = 0;
        for (auto it : mp)
        {
            int freq = it.second;
            if (freq % k)
            {
                cout << "0" << endl;
                cnt = 1;
                break;
            }
        }

        if(cnt)
        continue;

        map<int, int> mp2;
        for (auto it : mp)
        mp2[it.first] = it.second / k;

        int ans = 0;
        int l = 0;
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
            while (freq[arr[i]] > mp2[arr[i]])
            {
                freq[arr[l]]--;
                l++;
            }
            ans += (i - l + 1);
        }
        

        cout << ans << endl;
    }
}