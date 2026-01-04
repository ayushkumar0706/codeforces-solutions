#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int long long
#define endl '\n'

template <class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, k;
    cin>>n>>k;

    ordered_set<int>st;
    for(int i=0;i<n;i++){
        st.insert(i+1);
    }
    int pos = 0;
    while(!st.empty()){
        pos = (pos + k)%(st.size());
        auto it = st.find_by_order(pos);
        cout<<(*it)<<" ";
        st.erase(it);
    }

    cout<<endl;

}