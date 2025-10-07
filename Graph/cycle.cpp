#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
void dfs(int curr, vector<vector<int>> &edges, vector<bool> &vist, int parent){
    vist[curr] = true;
    
    for(int e: edges[curr]){
        if(e == parent)
        continue;

        if(!vist[e]){
            dfs(e, edges, vist, curr);
        }
        else{
            cout<<"CYCLE FOUND"<<endl;
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
for(int i=0; i<n; i++){
    if(!visited[i])
    dfs(i, edges, visited, -1);
}

}