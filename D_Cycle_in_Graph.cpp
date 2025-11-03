#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
bool dfs(int curr, vector<vector<int>> &edges, vector<int> &vist, int depth, int &k, vector<int> &path){
    vist[curr] = ++depth;
    path.push_back(curr);

    for(auto e: edges[curr]){
        if(vist[e] == -1){
            if(dfs(e, edges, vist, depth, k, path))
            return true;
        }
        else if((vist[curr] - vist[e]) >= k){
            vector<int> cycle;
            for (int i = path.size() - 1; i >= 0; i--) {
                cycle.push_back(path[i]);
                if (path[i] == e) break;
            }
            reverse(cycle.begin(), cycle.end());
            path = cycle;
            return true;
        }
    }

    path.pop_back();
    return false;
    
}

signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, m, k;
cin>>n>>m>>k;
vector<vector<int>>edges(n, vector<int>());
for(int i=0; i<m; i++){
    int u, v;
    cin>>u>>v;
    u--;v--;
    edges[u].push_back(v);
    edges[v].push_back(u);
}

vector<int>vist(n, -1);
vector<int>path;
dfs(0, edges, vist, 0, k, path);

cout<<path.size()<<endl;
for(auto it: path)
cout<<it+1<<" ";
cout<<endl;

}