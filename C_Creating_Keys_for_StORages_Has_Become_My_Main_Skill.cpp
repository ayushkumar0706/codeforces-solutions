#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        if (n == 1)
        {
            cout << x << endl;
            continue;
        }
        else if (x % 2 == 0)
        {
            cout << x << " ";
            for (int i = 0; i < n - 1; i++)
                cout << "0" << " ";
            cout << endl;
            continue;
        }
        else
        {
            int start = 0;
            for (int i = 0; i < 31; ++i)
            {
                if ((x & (1 << i)) == 0)
                {
                    start = i;
                    break;
                }
            }

            vector<int> ans(n);
            int zero = 1 << start;
            int result = 0;

            for (int i = 0; i < min(zero, n); ++i)
            {
                result |= i;
                ans[i] = i;
            }

            if (result != x)
                ans[n - 1] = x;

            for (int i = 0; i < n; ++i)
                cout << ans[i] << " ";
            cout << endl;
        }
    }
}

