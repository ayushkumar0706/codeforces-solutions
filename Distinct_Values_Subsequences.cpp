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
map<int, int>mp;
int ans = 1;
for(int i=0;i<n;i++){
cin>>arr[i];
mp[arr[i]]++;
}

for(auto it: mp){
    int cnt = it.second + 1;
    ans = (ans * cnt)%mod;
}

cout<<ans-1<<endl;

}