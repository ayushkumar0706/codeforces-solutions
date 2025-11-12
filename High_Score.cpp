#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int INF = 1e18;

signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, m;
cin>>n>>m;
struct Edge{
    int u, v, w;
};

vector<Edge>edges(m);
vector<vector<int>>adj(n);
for(int i=0; i<m; i++){
    int u, v, w;
    cin>>u>>v>>w;
    u--;v--;
    edges[i] = {u, v, -w};
    adj[u].push_back(v);
}

vector<int>dist(n, INF);
dist[0] = 0;
for(int i=0; i<n-1; i++){
    for(auto it: edges){
        if((dist[it.u] < INF) && (dist[it.v] > (dist[it.u] + it.w))){
            dist[it.v] = dist[it.u] + it.w;
        }
    }
}

vector<int>affected(n, 0);
for(auto it: edges){
    if((dist[it.u] < INF) && (dist[it.v] > (dist[it.u] + it.w))){
        affected[it.v] = 1;
    }
}

queue<int>q;
for(int i=0; i<n; i++){
    if(affected[i] == 1)
    q.push(i);
}

while(!q.empty()){
    int top = q.front();
    q.pop();
    for(int e: adj[top]){
        if(!affected[e]){
            affected[e] = 1;
            q.push(e);
        }
    }
}

if(affected[n-1]){
    cout<<"-1"<<endl;
}
else{
    cout<<-(dist[n-1])<<endl;
}
}