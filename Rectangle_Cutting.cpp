#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int a, b;
cin>>a>>b;

if(a == b){
    cout<<"0"<<endl;
    return 0;
}

vector<vector<int>>dp(a+1, vector<int>(b+1, 1e9));
for(int i=1; i<=a; i++){
    for(int j=1; j<=b; j++){
        if(i == j){
            dp[i][j] = 0;
            continue;
        }

        for(int k=1; k<i; k++){
            dp[i][j] = min(dp[i][j], 1 + dp[k][j] + dp[i-k][j]);
        }

        for(int k=1; k<j; k++){
            dp[i][j] = min(dp[i][j], 1 + dp[i][k] + dp[i][j-k]);
        }
    }
}

cout<<dp[a][b]<<endl;
    
}