

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--) {
        int n, l, r;
        cin>>n>>l>> r;

        vector<int> pre(n+1, 0);
        pre[0] = 0;

        for(int i=1; i<=n; i++){
            pre[i] = i;
            if(i == r)
            pre[i] = pre[l-1];
        }

        for(int i=0; i<n; i++){
            cout<<(pre[i] ^ pre[i+1])<<" ";
        }

        cout<<endl;
    }
}
