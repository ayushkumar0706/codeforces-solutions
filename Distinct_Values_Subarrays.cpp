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
map<int, int>mp;
int ans = 0, ind = 0;
for(int i=0;i<n;i++){
cin>>arr[i];
if(mp.find(arr[i]) != mp.end())
ind = max(ind, mp[arr[i]] + 1);
ans += (i - ind + 1);
mp[arr[i]] = i;
}

cout<<ans<<endl;

}