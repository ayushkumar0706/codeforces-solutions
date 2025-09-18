#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int mod = 1e9 + 7;

signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n;
cin>>n;

vector<int>dp(n+1, 0);
dp[0] = 1;

for(int i=1; i<=n; i++){
    for(int j=1; j<=6; j++){
        if(j <= i){
            dp[i] = (dp[i] + dp[i-j])%mod;
        }
    }
}

cout<<dp[n]<<endl;

}