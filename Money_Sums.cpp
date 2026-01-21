#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

int x = accumulate(arr.begin(), arr.end(), 0ll);
sort(arr.begin(), arr.end());

vector<vector<int>>dp(n+1, vector<int>(x+1, 0));
dp[0][0] = 1;

for(int i=1; i<=n; i++){
    for(int j=1; j<=x; j++){
        if(arr[i-1] == j){
            dp[i][j] = 1;
        }
        else{
            if(arr[i-1] < j)
            dp[i][j] = dp[i-1][j]|dp[i-1][j-arr[i-1]];
            else
            dp[i][j] = dp[i-1][j];
        }
    }
}

vector<int>ans;
for(int i=1; i<=x; i++){
    if(dp[n][i])
    ans.push_back(i);
}

cout<<ans.size()<<endl;
for(auto it: ans)
cout<<it<<" ";
cout<<endl;

}