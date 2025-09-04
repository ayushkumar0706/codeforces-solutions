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
int n, x, y;
cin>>n>>x>>y;
vector<int>arr(n);
map<pair<int, int>, int>mp;
for(int i=0;i<n;i++){
cin>>arr[i];
}

int ans = 0;
for(int i=0; i<n; i++){
    int fir = arr[i] % x;
    int sec = arr[i] % y;
    int el = (x - (arr[i] % x)) % x;
    if(mp.find({el, sec}) != mp.end())
    ans += mp[{el, sec}];
    mp[{fir, sec}]++;
}

cout<<ans<<endl;
    
}
}