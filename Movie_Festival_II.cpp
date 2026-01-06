#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, k;
cin>>n>>k;
vector<pair<int, int>>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i].first>>arr[i].second;
}

sort(arr.begin(), arr.end(), [&](auto &i, auto &j){
    if(i.second == j.second)
    return i.first < j.first;
    return i.second < j.second;
});

multiset<int>st;

int ans = 0;

for(int i=0; i<n; i++){
    auto it = st.upper_bound(arr[i].first);

    if(it != st.begin()){
        it--;
        st.erase(it);
        ans++;
        st.insert(arr[i].second);
    }else if((int)st.size() < k){
        st.insert(arr[i].second);
        ans++;
    }
}

cout<<ans<<endl;

}
