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
int n, k;
cin>>n>>k;
map<int, int>mp;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
mp[arr[i]]++;
}

int cnt = 0;
for(int i=0; i<=n; i++){
    if(i == k){
        if(mp.find(i) != mp.end()){
            if(mp[i] > cnt)
            cnt += (mp[i] - cnt);
        }
        break;
    }
    if(mp.find(i) == mp.end())
    cnt++;
}

cout<<cnt<<endl;
    
}
}