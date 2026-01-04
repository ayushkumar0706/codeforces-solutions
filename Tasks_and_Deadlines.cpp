#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n;
cin>>n;
vector<pair<int, int>>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i].first>>arr[i].second;
}

sort(arr.begin(), arr.end(), [&](auto a, auto b){
    if(a.first == b.first)
    return a.second > b.second;
    return a.first < b.first;
});

int t = 0, ans = 0;
for(auto it: arr){
    ans += (it.second - (t + it.first));
    t += it.first;
}

cout<<ans<<endl;

}
