#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

const int mod = 1e9 + 7;
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n;
cin>>n;
vector<vector<char>>mat(n, vector<char>(n));
for(int i=0;i<n;i++){
    for(int j=0; j<n; j++)
    cin>>mat[i][j];
}

vector<vector<int>>dp(n+1, vector<int>(n+1, 0));
for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        if(mat[i-1][j-1] != '*'){
            if((i==1) && (j==1))
            dp[i][j] = 1;
            else 
            dp[i][j] = (dp[i-1][j] + dp[i][j-1])%mod;
        }
    }
}

cout<<dp[n][n]<<endl;

}