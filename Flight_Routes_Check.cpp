#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
void dfs(int curr, vector<vector<int>> &edges, vector<int> &vist, stack<int> &st){
    vist[curr] = 1;
    for(int e: edges[curr]){
        if(vist[e] == 0){
            dfs(e, edges, vist, st);
        }
    }
    st.push(curr);
}

void dfs2(int curr, vector<vector<int>> &edges, vector<int> &vist, int &cnt){
    vist[curr] = cnt;
    for(int e: edges[curr]){
        if(vist[e] == -1){
            dfs2(e, edges, vist, cnt);
        }
    }
}

signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, m;
cin>>n>>m;
vector<vector<int>>edges(n, vector<int>());
vector<vector<int>>adj(n, vector<int>());
for(int i=0; i<m; i++){
    int u, v;
    cin>>u>>v;
    u--;v--;
    edges[u].push_back(v);
    adj[v].push_back(u);
}

stack<int>st;
vector<int>visited(n, 0);
for(int i=0; i<n; i++){
    if(visited[i] == 0)
    dfs(i, edges, visited, st);
}

fill(visited.begin(), visited.end(), -1);

int cnt = 0;
int curr = st.top();
while(!st.empty()){
    int node = st.top();
    st.pop();
    if(visited[node] == -1){
        dfs2(node, adj, visited, cnt);
        cnt++;
    }
}

cnt = visited[curr];
for(int i=0; i<n; i++){
    if(visited[i] != cnt){
        cout<<"NO"<<endl;
        cout<<i+1<<" "<<curr+1<<endl;
        return 0;
    }
}

cout<<"YES"<<endl;

}