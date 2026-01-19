#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

const int mod = 1e9 + 7;
const int MAXN = 1e6;

vector<vector<int>>dp(MAXN+1, vector<int>(2, 0));

void preCompute(){
    dp[1][0] = 1; dp[1][1] = 1;
    
    for(int i=2; i<=MAXN; i++){
        dp[i][0] = ((4*(dp[i-1][0]))%mod + dp[i-1][1])%mod;
        dp[i][1] = ((2*(dp[i-1][1]))%mod + dp[i-1][0])%mod;
    }
}

signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
preCompute();
int t;
cin>>t;
while(t--){
int n;
cin>>n;

cout<<(dp[n][0] + dp[n][1])%mod<<endl;

}
}