#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
bool dfs(int curr, vector<vector<int>> &edges, vector<int> &vist, int &node, vector<int>&parent){
    vist[curr] = 1;

    for(int e: edges[curr]){
        if(vist[e] == 0){
            parent[e] = curr;
            if(dfs(e, edges, vist, node, parent))
            return 1;
        }
        else if(vist[e] == 1){
            node = e;
            parent[e] = curr;
            return 1;
        }
    }

    vist[curr] = 2;
    return 0;
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

vector<int>visited(n, 0);
vector<int>parent(n, -1);

int curr = -1;
for(int i=0; i<n; i++){
    if(dfs(i, edges, visited, curr, parent)){
        break;
    }
}

if(curr == -1){
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}

vector<int>cycle;
int start = curr;
while(true){
    cycle.push_back(curr);
    curr = parent[curr];
    if(curr == start)
    break;
}
cycle.push_back(start);

reverse(cycle.begin(), cycle.end());
cout<<cycle.size()<<endl;
for(auto it: cycle){
    cout<<it+1<<" ";
}
cout<<endl;

}