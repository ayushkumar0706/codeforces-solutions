#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int long long
#define endl '\n'

typedef tree<
    pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update
> ordered_set;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    cin >> arr[i];

    ordered_set st;

    for(int i=0; i<k; i++) {
        st.insert({arr[i], i});
    }

    int idx = ((k+1)/2)-1;
    cout<<st.find_by_order(idx)->first<<" ";

    for(int i=k; i<n; i++) {
        st.erase({arr[i - k], i - k});
        st.insert({arr[i], i});
        cout<<st.find_by_order(idx)->first<<" ";
    }
}
