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
int n, m, k;
cin>>n>>m>>k;
vector<int>arr(n), brr(m);
set<int>st;
for(int i=0;i<n;i++){
cin>>arr[i];
}

for(int i=0;i<m;i++){
cin>>brr[i];
st.insert(brr[i]);
}

string s;
cin>>s;

int ans = n;
map<int, multiset<int>>mp;

for(int i=0; i<n; i++){
    auto l = st.upper_bound(arr[i]);
    auto r = st.upper_bound(arr[i]);
    int cntL = INT_MAX, cntR = INT_MAX;
    if(l != st.begin()){
        l--;
        cntL = (*l - arr[i]);
    }

    if(r != st.end()){
        cntR = (*r - arr[i]);
    }

    if(cntL != INT_MAX)
    mp[cntL].insert(cntR);

    if(cntR != INT_MAX)
    mp[cntR].insert(cntL);
}

int cnt = 0;
for(auto it: s){
    if(it == 'R')
    cnt++;
    else cnt --;

    if(mp.find(cnt) != mp.end()){
        ans -= mp[cnt].size();
        for(auto el: mp[cnt]){
            if(el != INT_MAX){
                auto p = mp[el].find(cnt);
                mp[el].erase(cnt);
            }
        }
        mp.erase(cnt);
    }

    cout<<ans<<" ";
}

cout<<endl;

}
}