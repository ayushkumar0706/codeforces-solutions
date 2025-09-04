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
vector<int>arr(n);
map<int, int>mp;
for(int i=0;i<n;i++){
cin>>arr[i];
mp[(arr[i]%m)]++;
}

int ans = 0;
for(auto it: mp){
    if(((2*it.first) == m) || (it.first == 0))
    ans++;
    else if (2 * it.first < m || mp.find(m - it.first) == mp.end()) {
        int x = it.second;
        int y;
        if(mp.find(m - it.first) == mp.end())
        y = 0;
        else
        y = mp[m - it.first];
        ans += 1 + max(0LL, abs(x - y) - 1);
    }
}

cout<<ans<<endl;
    
}
}