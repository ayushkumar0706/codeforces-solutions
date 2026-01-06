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

map<int, int>mp;
mp[0] = 1;

int pre = 0, ans = 0;
for(int i=0; i<n; i++){
    pre = (pre + arr[i])%n;
    if(pre < 0)
    pre += n;
    if(mp.find(pre) != mp.end()){
        ans += mp[pre];
    }
    mp[pre]++;
}

cout<<ans<<endl;

}