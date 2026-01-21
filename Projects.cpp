#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n;
cin>>n;
vector<pair<pair<int, int>, int>>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i].first.first>>arr[i].first.second>>arr[i].second;
}

sort(arr.begin(), arr.end(), [](const auto &a, const auto &b){
    if(a.first.second == b.first.second)
    return a.second > b.second;
    return a.first.second < b.first.second;
});

vector<int>dp(n, 0);
dp[0] = arr[0].second;
for(int i=1; i<n; i++){
    auto it = lower_bound(arr.begin(), arr.end(), arr[i].first.first, [](const auto &x, const int &val)
    { 
        return x.first.second < val; 
    });
    int temp = 0;
    if(it != arr.begin()){
        it--;
        temp = dp[it-arr.begin()];
    }

    dp[i] = max(dp[i-1], arr[i].second + temp);
}

cout<<dp[n-1]<<endl;

}