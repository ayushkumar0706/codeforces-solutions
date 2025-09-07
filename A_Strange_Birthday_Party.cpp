#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--){
int n, m;
cin>>n>>m;
vector<int>index(n), cost(m);
for(int i=0;i<n;i++){
cin>>index[i];
}
for(int i=0;i<m;i++){
cin>>cost[i];
}

int idx = 0, ans = 0;
sort(index.begin(), index.end());
for(int i=n-1; i>=0; i--){
    if(idx <= (index[i]-1)){
        ans += cost[idx];
        idx++;
    }
    else{
        ans += cost[index[i]-1];
    }
}

cout<<ans<<endl;
    
}
}