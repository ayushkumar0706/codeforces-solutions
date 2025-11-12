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
for(int i=0; i<m; i++){
    int u, v, w;
    cin>>u>>v>>w;
    u--;v--;
    edges[i] = {u, v, w};
}

vector<int>dist(n, 0);
vector<int>parent(n, -1);
int curr = -1;
for(int i=0; i<n; i++){
    curr = -1;
    for(auto it: edges){
        if(dist[it.v] > (dist[it.u] + it.w)){
            dist[it.v] = max(-INF, dist[it.u] + it.w);
            parent[it.v] = it.u;
            curr = it.v;
        }
    }
}

if(curr != -1){
    cout<<"YES"<<endl;
    vector<int>cycle;

    for(int i=0; i<n; i++){
        curr = parent[curr];
    }
    
    int start = curr;
    while(true){
        cycle.push_back(curr+1);
        curr = parent[curr];
        if(curr == start)
        break;
    }
    cycle.push_back(start+1);

    reverse(cycle.begin(), cycle.end());
    for(auto it: cycle)
    cout<<it<<" ";
    cout<<endl;
}
else{
    cout<<"NO"<<endl;
}
}