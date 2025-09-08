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
int n;
cin>>n;
vector<int>arr(n);
map<int, pair<int, int>>mp;
for(int i=0;i<n-1;i++){
cin>>arr[i];
}
string s;
cin>>s;

for(int i=0; i<n; i++){
    if(s[i] == 'W'){
        mp[i+1].first += 1;
    }
    else{
        mp[i+1].second += 1;
    }    
}

for(int i=n-2; i>=0; i--){
    if(mp.find(i+2) != mp.end()){
        mp[arr[i]].first += mp[i+2].first;
        mp[arr[i]].second += mp[i+2].second;
    }
}

int ans = 0;
for(auto it: mp){
    if(it.second.first == it.second.second)
    ans++;
}

cout<<ans<<endl;
    
}
}