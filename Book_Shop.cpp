#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, x;
cin>>n>>x;
vector<int>cost(n), pages(n);
for(int i=0;i<n;i++){
cin>>cost[i];
}

for(int i=0;i<n;i++){
cin>>pages[i];
}

vector<int>dp(x+1);
for(int i=0; i<n; i++){
    for(int j=x; j>=cost[i]; j--){
        dp[j] = max(pages[i]+dp[j-cost[i]], dp[j]);
    }
}

cout<<dp[x]<<endl;

}