#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n' 

int dp[100001];
int solve(vector<int>&arr, int i, int &n){
    if(i > n)
    return 0;

    if(dp[i] != -1)
    return dp[i];

    int ans = 1;
    for(int j=2*i; j<=n; j+=i){
        if(arr[i-1] < arr[j-1])
        ans = max(ans, 1 + solve(arr, j, n));
    }

    return dp[i] = ans;
}

signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}
memset(dp, -1, sizeof(dp));

int res = 0;
for(int i=1; i<=n; i++)
    res = max(res, solve(arr, i, n));
    
    cout<<res<<endl;
}
}