#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define int long long
#define endl '\n'

using ordered_set = tree<
    pair<int,int>,
    null_type,
    less<pair<int,int>>,
    rb_tree_tag,
    tree_order_statistics_node_update>;

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    ordered_set st;
    int ans = 0;
    for(int i=0; i<k; i++){
        int idx1 = st.order_of_key({arr[i]+1, -1});
        ans += (st.size() - idx1);
        st.insert({arr[i], i});
    }

    cout<<ans<<" ";

    for(int i=k; i<n; i++){
        int idx = st.order_of_key({arr[i-k], -1});
        ans -= idx;
        st.erase({arr[i-k], i-k});
        int idx1 = st.order_of_key({arr[i]+1, -1});
        ans += (st.size() - idx1);
        st.insert({arr[i], i});
        cout<<ans<<" ";
    }
    cout<<endl;

}