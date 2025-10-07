#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void dfs(int curr, vector<vector<int>> &edges, vector<bool> &vist){
    vist[curr] = true;
    cout<<curr<<" ";

    for(int e: edges[curr]){
        if(!vist[e]){
            dfs(e, edges, vist);
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
    edges[u].push_back(v);
    edges[v].push_back(u);
}

vector<bool>visited(n, false);
dfs(0, edges, visited);

}