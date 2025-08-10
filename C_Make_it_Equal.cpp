#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> arr(n), brr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }

        unordered_map<long long, long long> mp1, mp2;
        for (int i = 0; i < n; i++)
        {
            mp1[arr[i] % k]++;
            mp2[brr[i] % k]++;
        }

        int cnt = 1;

        for (auto it : mp1)
        {
            long long mod = it.first;
            long long need = it.second;

            if (mp2[mod] >= need)
            {
                mp2[mod] -= need;
            }
            else
            {
                long long rem = need - mp2[mod];
                mp2[mod] = 0;
                long long comp = (k - mod) % k;
                if (mp2[comp] >= rem)
                {
                    mp2[comp] -= rem;
                }
                else
                {
                    cnt = 0;
                    break;
                }
            }
        }

        if (cnt)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}