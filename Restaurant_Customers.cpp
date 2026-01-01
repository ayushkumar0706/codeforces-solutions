#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n;
cin>>n;
vector<pair<int, int>>arr(2*n);
for(int i=0;i<(2*n);i+=2){
    int x, y;
    cin>>x>>y;
    arr[i] = {x, 1};
    arr[i+1] = {y, -1};
}

sort(arr.begin(), arr.end());
int ans = 1, cnt = 0;
for(int i=0; i<(2*n); i++){
    cnt += (arr[i].second);
    ans = max(ans, cnt);
}

cout<<ans<<endl;

}

// Alternate approach

// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// #define endl '\n'
// signed main()
// {
// ios_base::sync_with_stdio(false); cin.tie(0);
// int n;
// cin>>n;
// vector<pair<int, int>>arr(n);
// for(int i=0;i<n;i++){
//     int x, y;
//     cin>>x>>y;
//     arr[i].first = x;
//     arr[i].second = y;
// }

// sort(arr.begin(), arr.end());
// int ans = 1;
// set<int>st;
// st.insert(arr[0].second);

// for(int i=1; i<n; i++){
//     auto it = st.lower_bound(arr[i].first);
//     st.erase(st.begin(), it);
//     st.insert(arr[i].second);
//     ans = max(ans, (long long)st.size());
// }

// cout<<ans<<endl;

// }