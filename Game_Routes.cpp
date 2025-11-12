#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int mod = 1e9 + 7;
 
void dfs(int curr, vector<vector<int>> &edges, vector<bool> &vist, vector<int>&topo){
    vist[curr] = true;
    for(int e: edges[curr]){
        if(!vist[e]){
            dfs(e, edges, vist, topo);
        }
    }
    topo.push_back(curr);
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
}
 
vector<bool>visited(n, false);
vector<int>topo;
dfs(0, edges, visited, topo);
reverse(topo.begin(), topo.end());
vector<int>indegree(n, 0);
indegree[0] = 1;
 
for(int i=0; i<topo.size(); i++){
    for(auto e: edges[topo[i]]){
        indegree[e] = (indegree[topo[i]]+indegree[e])%mod;
    }
}
 
cout<<indegree[n-1]<<endl;
 
}