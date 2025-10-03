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
map<int, int>mp;
for(int i=0; i<n; i++){
    int s;
    cin>>s;
    for(int j=0; j<s; j++){
        int x;
        cin>>x;
        mp[x]++;
    }
}

if(mp.size() < m || n < 2){
    cout<<"NO"<<endl;
}
else{
    int cnt = 0, sec = 0;
    for(auto it: mp){
        if(it.second >= 2)
        sec++;
        if(it.second >= 3){
            cnt = 1;
            break;
        }
        if(sec >= 2){
            cnt = 1;
            break;
        }
    }

    if(cnt)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
    
}
}