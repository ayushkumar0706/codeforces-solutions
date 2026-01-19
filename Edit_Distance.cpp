#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
string s,t;
cin>>s>>t;

int n = s.size();
int m = t.size();

vector<vector<int>>dp(n+1, vector<int>(m+1, 1e9));
dp[0][0] = 0;

for(int i=1; i<=n; i++){
    dp[i][0] = i;
}

for(int j=1; j<=m; j++){
    dp[0][j] = j;
}

for(int i=1; i<=n; i++){
    for(int j=1; j<=m; j++){
        int temp1 = 1 + dp[i][j-1];
        int temp2 = 1 + dp[i-1][j];
        int temp3 = dp[i-1][j-1];
        if(s[i-1] != t[j-1])
        temp3++;
        dp[i][j] = min({dp[i][j], temp1, temp2, temp3});
    }
}

cout<<dp[n][m]<<endl;

}