#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int mod = 1e9 + 7;

signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, x;
cin>>n>>x;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

vector<int>dp(x+1, 0);
dp[0] = 1;

for(int i=1; i<=x; i++){
    for(int j=0; j<n; j++){
        if(arr[j] <= i)
        dp[i] += dp[i-arr[j]];
        if(dp[i] >= mod)
        dp[i] -= mod;
    }
}

cout<<dp[x]<<endl;
    
}