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
for(int i=0;i<n;i++){
cin>>arr[i];
mp[arr[i]] = i;
}

int ans = 1;
for(int i=2; i<=n; i++){
    if(mp[i] < mp[i-1])
    ans++;
}

cout<<ans<<endl;

}