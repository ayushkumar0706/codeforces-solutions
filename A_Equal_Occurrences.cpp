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
map<int, int>mp;
for(int i=0;i<n;i++){
cin>>arr[i];
mp[arr[i]]++;
}

vector<int>ans;
for(auto it: mp)
ans.push_back(it.second);
sort(ans.begin(), ans.end());
int m = ans.size();

int cnt = INT_MIN;
for(auto it:ans){
    cnt = max(cnt, it*m);
    m--;
}

cout<<cnt<<endl;
    
}
}