#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        if (n % 25 == 0)
        {
            cout << "0" << endl;
            continue;
        }

        string s = to_string(n);
        int m = s.size();

        int ans1 = 0, ans2 = 0;
        int cnt1 = 0, cnt2 = 0;

        for (int i = m - 1; i >= 0; i--)
        {
            if (cnt1 == 0 && s[i] != '5')
            {
                ans1++;
            }

            if (cnt1 == 1)
            {
                if (s[i] == '2' || s[i] == '7')
                    break;
                else
                    ans1++;
            }

            if (s[i] == '5')
                cnt1 = 1;
        }

        for (int i = m - 1; i >= 0; i--)
        {
            if (cnt2 == 0 && s[i] != '0')
            {
                ans2++;
            }

            if (cnt2 == 1)
            {
                if (s[i] == '0' || s[i] == '5')
                    break;
                else
                    ans2++;
            }

            if (s[i] == '0')
                cnt2 = 1;
        }

        cout << min(ans1, ans2) << endl;
    }
}