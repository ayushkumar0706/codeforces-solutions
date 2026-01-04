#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = INT_MAX;
    int l = 1, h = (*max_element(arr.begin(), arr.end()) * k);
    while(l <= h){
        int t = l + (h - l) / 2;
        int pro = 0;
        for(int i=0; i<n; i++){
            pro += (t/arr[i]);
            if(pro >= k) break;
        }

        if(pro >= k){
            ans = t;
            h = t - 1;
        }
        else{
            l = t + 1;
        }
    }

    cout<<ans<<endl;

}