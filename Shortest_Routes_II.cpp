#include<bits/stdc++.h>
using namespace std;
#define int long long
#define INF LLONG_MAX
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, m, q;
cin>>n>>m>>q;
vector<vector<int>>dist(n, vector<int>(n, INF));
for(int i=0; i<m; i++){
    int u, v, w;
    cin>>u>>v>>w;
    u--;v--;
    dist[u][v] = min(dist[u][v], w);
    dist[v][u] = min(dist[v][u], w);
}

for(int i=0; i<n; i++)
dist[i][i] = 0;

for(int k=0; k<n; k++){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((dist[i][k] < INF) && (dist[k][j] < INF))
            dist[i][j] = min(dist[i][j], (dist[i][k] + dist[k][j]));
        }
    }
}

for(int i=0; i<q; i++){
    int u, v;
    cin>>u>>v;
    u--;v--;
    if(dist[u][v] != (INF))
    cout<<dist[u][v]<<endl;
    else cout<<"-1"<<endl;
}

}