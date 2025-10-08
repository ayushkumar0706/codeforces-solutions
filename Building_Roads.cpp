#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void dfs(int curr, vector<vector<int>> &edges, vector<bool> &vist, int cnt, vector<int> &ans){
    vist[curr] = true;
    ans[curr] = cnt;

    for(int e: edges[curr]){
        if(!vist[e]){
            dfs(e, edges, vist, cnt, ans);
        }
    }
}

signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, m;
cin>>n>>m;
vector<vector<int>>edges(n, vector<int>());
for(int i=0; i<m; i++){
    int u, v;
    cin>>u>>v;
    u--;v--;
    edges[u].push_back(v);
    edges[v].push_back(u);
}

int cnt = 1;
vector<int>ans(n, 0);
vector<bool>vist(n, false);

for(int i=0; i<n; i++){
    if(!vist[i]){
        dfs(i, edges, vist, cnt, ans);
        cnt++;
    }
}

cnt-=2;
cout<<cnt<<endl;

map<int, int>mp;
for(int i=0; i<n; i++){
    mp[ans[i]] = i+1;
}

int prev = -1;
for(auto it: mp){
    if(prev != -1)
    cout<<prev<<" "<<it.second<<endl;
    prev = it.second;
}

}