#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void dfs(int curr, vector<vector<int>> &edges, vector<int> &color){
    for(int e: edges[curr]){
        if(color[e] == 0){
            color[e] = color[curr] == 1 ? 2 : 1;
            dfs(e, edges, color);
        }
        else if(color[e] == color[curr]){
            cout<<"NOT BIPARTITE"<<endl;
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

vector<int>color(n, 0);
for(int i=0; i<n; i++){
    if(color[i] == 0){
        color[i] = 1;
        dfs(i, edges, color);
    }
}

}