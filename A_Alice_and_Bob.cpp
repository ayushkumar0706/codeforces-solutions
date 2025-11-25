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
        int n, a;
        cin >> n >> a;
        vector<int> arr(n);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] == a)
            cnt++;
        }

        sort(arr.begin(), arr.end());
        int idx = upper_bound(arr.begin(), arr.end(), a) - arr.begin();

        int idx1 = idx - cnt;
        int idx2 = n - idx;
        if(cnt == n){
            cout<<a<<endl;
            continue;
        }
        if(idx2 >= idx1){
            cout<<arr[idx]<<endl;
        }
        else{
            cout<<arr[idx1-1]<<endl;
        }
    }
}