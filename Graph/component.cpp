#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
void dfs(int curr, vector<vector<int>> &edges, vector<bool> &vist, int &cnt, vector<int>&comp){
    vist[curr] = true;
    comp[curr] = cnt;

    for(int e: edges[curr]){
        if(!vist[e]){
            dfs(e, edges, vist, cnt, comp);
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

    int cnt = 0;
    vector<bool>visited(n, false);
    vector<int>comp(n);

    for(int i=0; i<n; i++){
        if(!visited[i]){
            dfs(i, edges, visited, cnt, comp);
            cnt++;
        }
    }

    for(auto it: comp)
cout<<it<<" ";

}