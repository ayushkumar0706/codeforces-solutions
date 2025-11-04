#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void Dijkstra(int src, vector<vector<pair<int, int>>> &edges, vector<int> &dist){
    dist[src] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
    pq.push({0, src});

    while(!pq.empty()){
        auto top = pq.top();
        pq.pop();
        int len = top.first;
        int curr = top.second;
        if(dist[curr] != len)
        continue;

        for(auto node: edges[curr]){
            if((dist[node.first]) > (len + node.second)){
                dist[node.first] = len + node.second;
                pq.push({dist[node.first], node.first});
            }
        }
    }
}

signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, m;
cin>>n>>m;
vector<vector<pair<int, int>>>edges(n, vector<pair<int, int>>());
for(int i=0; i<m; i++){
    int u, v, w;
    cin>>u>>v>>w;
    u--;v--;
    edges[u].push_back({v, w});
}

vector<int>dist(n, LLONG_MAX);
Dijkstra(0, edges, dist);
for(auto it: dist)
cout<<it<<" ";
cout<<endl;

}

