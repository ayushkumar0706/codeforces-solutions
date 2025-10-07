#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void dfs(int curr, vector<vector<int>> &edges, vector<bool> &vist, vector<int> &parent){
    vist[curr] = true;

    for(int e: edges[curr]){
        if(!vist[e]){
            parent[e] = curr;
            dfs(e, edges, vist, parent);
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

int start, end;
cin>>start>>end;

vector<int>parent(n, -1);
vector<bool>vist(n, false);
dfs(start, edges, vist, parent);

while(end != -1){
    cout<<end<<" ";
    end = parent[end];
}


}