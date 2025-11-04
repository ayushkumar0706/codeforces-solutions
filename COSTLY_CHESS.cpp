#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = (ll)4e18; 

int dx[8] = {2, 2, -2, -2, 1, 1, -1, -1};
int dy[8] = {1, -1, 1, -1, 2, -2, 2, -2};
void Dijkstra(int a, int b, vector<vector<ll>> &dist){
    priority_queue<pair<ll, pair<int, int>>, vector<pair<ll, pair<int, int>>>, greater<pair<ll, pair<int, int>>>> pq;
    dist[a][b] = 0;
    pq.push({0, {a, b}});

    while(!pq.empty()){
        auto top = pq.top();
        pq.pop();
        ll len = top.first;
        int i = top.second.first;
        int j = top.second.second;
        if(dist[i][j] != len)
            continue;
        for(int k=0; k<8; k++){ 
            if(((i+dx[k]) < 0) || ((i+dx[k]) > 7) || ((j+dy[k]) < 0) || ((j+dy[k]) > 7))
            continue;
            ll w = (i*1ll*(i+dx[k])) + (j*1ll*(j+dy[k]));
            if(dist[i+dx[k]][j+dy[k]] > (len + w)){
                dist[i+dx[k]][j+dy[k]] = len + w;
                pq.push({dist[i+dx[k]][j+dy[k]], {i+dx[k], j+dy[k]}});
            }
        }
    }
}

signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int a, b, c, d;
while(cin>>a>>b>>c>>d){
vector<vector<ll>>dist(8, vector<ll>(8, INF));
Dijkstra(a, b, dist);

if(dist[c][d] != INF)
cout<<dist[c][d]<<endl;
else cout<<"-1"<<endl;

}
}

