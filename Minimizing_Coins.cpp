#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int INF = 1e18;

int dp[1000001];
int solve(vector<int>&arr, int sum){
    if(sum < 0)
    return INF;

    if(sum == 0)
    return 0;

    if(dp[sum] != -1)
    return dp[sum];

    int ans = INF;
    for(int coins: arr)
    ans = min(ans, 1 + solve(arr, sum-coins));

    return dp[sum] = ans;
}

signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, x;
cin>>n>>x;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

memset(dp, -1, sizeof(dp));

int ans = solve(arr, x);

cout<<((ans >= INF) ? -1: ans)<<endl;

}