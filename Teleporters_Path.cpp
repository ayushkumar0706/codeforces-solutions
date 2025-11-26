#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
void dfs(int curr, vector<vector<pair<int, int>>> &edges, vector<bool> &vist){
    vist[curr] = true;
    for(auto it: edges[curr]){
        int e = it.first;
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
int id = 0;
vector<vector<pair<int, int>>>edges(n, vector<pair<int, int>>());
vector<int>indegree(n, 0);
vector<int>outdegree(n, 0);
for(int i=0; i<m; i++){
    int u, v;
    cin>>u>>v;
    u--;v--;
    edges[u].push_back({v, id});
    outdegree[u]++;
    indegree[v]++;
    id++;
}

vector<bool>visited(n, false);

for(int i=0; i<n; i++){
    if(((outdegree[0]-indegree[0]) != 1) || ((indegree[n-1]-outdegree[n-1]) != 1) || (((indegree[i]-outdegree[i]) != 0) && (i != 0) && (i != (n-1)))){
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
}

dfs(0, edges, visited);
for(int i=0; i<n; i++){
    if(((indegree[i] != 0) && (!visited[i])) ||((outdegree[i] != 0) && !visited[i])){
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
}

stack<int>st;
vector<bool>used(m, 0);
vector<int>cycle;

st.push(0);
while(!st.empty()){
    int u = st.top();
    while((!edges[u].empty()) && (used[edges[u].back().second]))
    edges[u].pop_back();

    if(!edges[u].empty()){
        auto it = edges[u].back();
        int v = it.first;
        int id = it.second;
        used[id] = true;
        st.push(v);
    }
    else{
        st.pop();
        cycle.push_back(u);
    }
}

reverse(cycle.begin(), cycle.end());
for(auto it: cycle){
    cout<<it+1<<" ";
}
cout<<endl;

}