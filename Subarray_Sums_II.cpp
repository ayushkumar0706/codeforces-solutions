#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, x;
cin>>n>>x;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

map<int, int>mp;
mp[0] = 1;

int pre = 0, ans = 0;
for(int i=0; i<n; i++){
    pre += arr[i];
    if(mp.find(pre-x) != mp.end()){
        ans += mp[pre-x];
    }
    mp[pre]++;
}

cout<<ans<<endl;

}