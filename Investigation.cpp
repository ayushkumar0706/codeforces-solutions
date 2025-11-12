#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = (ll)4e18; 
const int mod = 1e9 + 7;

void Dijkstra(int src, vector<vector<pair<int, ll>>> &edges, vector<ll> &dist, vector<int> &cnt, vector<int> &mini, vector<int> &maxi){
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    dist[src] = 0;
    cnt[src] = 1;
    mini[src] = 0;
    maxi[src] = 0;
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
                pq.push({dist[node], node});
                cnt[node] = cnt[curr];
                mini[node] = 1 + mini[curr];
                maxi[node] = 1 + maxi[curr];
            }
            else if(dist[node] == (len + w)){
                cnt[node] = (cnt[node] + cnt[curr])%mod;
                mini[node] = min(mini[node], 1 + mini[curr]);
                maxi[node] = max(maxi[node], 1 + maxi[curr]);
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

vector<ll>dist(n, INF);
vector<int>cnt(n, 0);
vector<int>mini(n, INT_MAX);
vector<int>maxi(n, INT_MIN);
Dijkstra(0, edges, dist, cnt, mini, maxi);

cout<<dist[n-1]<<" "<<cnt[n-1]<<" ";
cout<<mini[n-1]<<" "<<maxi[n-1]<<endl;

}