#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = (ll)4e18; 

void Dijkstra(int src, vector<vector<pair<int, ll>>> &edges, vector<vector<ll>> &dist){
    priority_queue<vector<ll>, vector<vector<ll>>, greater<vector<ll>>> pq;
    dist[src][0] = 0;
    dist[src][1] = 0;
    pq.push({0, 0, src});
    pq.push({0, 1, src});

    while(!pq.empty()){
        auto top = pq.top();
        pq.pop();
        ll len = top[0];
        ll b = top[1];
        ll curr = top[2];
        if(dist[curr][b] < len)
        continue;
        for(auto it: edges[curr]){
            int node = it.first;
            int w = it.second;
            
            if(b == 0){
                if(dist[node][0] > len + w){
                    dist[node][0] = len + w;
                    pq.push({dist[node][0], 0, node});
                }

                ll discounted = len + (w / 2);
                if(dist[node][1] > discounted){
                    dist[node][1] = discounted;
                    pq.push({dist[node][1], 1, node});
                }
            }
            else{
                if(dist[node][1] > len + w){
                    dist[node][1] = len + w;
                    pq.push({dist[node][1], 1, node});
                }
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
}

vector<vector<ll>>dist(n, vector<ll>(2, INF));
Dijkstra(0, edges, dist);

ll ans = min(dist[n-1][0], dist[n-1][1]);
if(ans != INF)
cout<<ans<<endl;
else cout<<"-1"<<endl;

}

