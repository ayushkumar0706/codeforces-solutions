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
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

int sum = n*(n+1)/2;
if(sum%2){
    cout<<"0"<<endl;
    return 0;
}

sum /= 2;
vector<vector<int>>dp(n+1, vector<int>(sum+1, 0));

for(int i=0; i<=n; i++){
    dp[i][0] = 1;
}

for(int i=1; i<=n; i++){
    for(int j=1; j<=sum; j++){
        if(i > j){
            dp[i][j] = dp[i-1][j];
        }
        else{
            dp[i][j] = (dp[i-1][j] + dp[i-1][j-i])%mod;
        }
    }
}

int inv2 = (mod + 1)/2;
cout<<(dp[n][sum]*inv2)%mod<<endl;

}