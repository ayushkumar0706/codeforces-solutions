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
int n;
cin>>n;
vector<pair<int, int>>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i].first>>arr[i].second;
}

vector<int>idx(n);
iota(idx.begin(), idx.end(), 0);
sort(idx.begin(), idx.end(), [&](int i, int j){
    if(arr[i].first == arr[j].first)
    return arr[i].second > arr[j].second;
    return arr[i].first < arr[j].first;
});

ordered_set<pair<int, int>>st;
vector<int>contains(n, 0), contained(n, 0);

for(int i=n-1; i>=0; i--){
    int key = arr[idx[i]].second;
    
    int passes = st.order_of_key({key+1, -1});
    contains[idx[i]] = passes;
    st.insert({key, idx[i]});
}

st.clear();

for(auto it: idx){
    int key = arr[it].second;
    
    int passes = st.order_of_key({key, -1});
    passes = (long long)st.size() - passes;
    contained[it] = passes;
    st.insert({key, it});
}

for(auto it: contains)
cout<<it<<" ";
cout<<endl;

for(auto it: contained)
cout<<it<<" ";
cout<<endl;

}