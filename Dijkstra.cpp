#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = (ll)4e18; 

void Dijkstra(int src, vector<vector<pair<int, ll>>> &edges, vector<ll> &dist, vector<int> &parent){
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    dist[src] = 0;
    pq.push({0, src});

    while(!pq.empty()){
        auto top = pq.top();
        pq.pop();
        ll len = top.first;
        int curr = top.second;
        if(dist[curr] != len)
            continue;
        for(auto it: edges[curr]){
            int node = it.first;
            int w = it.second;
            
            if(dist[node] > (len + w)){
                dist[node] = len + w;
                parent[node] = curr;
                pq.push({dist[node], node});
            }
        }
    }
}

signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, m;
cin>>n>>m;
vector<vector<pair<int, ll>>>edges(n, vector<pair<int, ll>>());
for(int i=0; i<m; i++){
    int u, v, w;
    cin>>u>>v>>w;
    u--; v--;
    edges[u].push_back({v, w});
    // edges[v].push_back({u, w});
}

vector<ll>dist(n, INF);
vector<int>parent(n, -1);
Dijkstra(0, edges, dist, parent);
for(auto it: dist)
cout<<it<<" ";
cout<<endl;
// for(int i=0; i<n; i++){
//     int curr = i;
//     while(curr != -1){
//         cout<<curr<<" ";
//         curr = parent[curr];
//     }
//     cout<<endl;
// }

}

