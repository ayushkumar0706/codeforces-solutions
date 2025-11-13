#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

class dsu{
    vector<int>parent, size, rank;

    public:
    dsu(int n){
        for(int i=0; i<n; i++){
            parent.push_back(i);
            size.push_back(1);
            rank.push_back(0);
        }
    }

    int findPar(int node){
        if(parent[node] == node)
            return node;
        return parent[node] = findPar(parent[node]);
    }

    void unionSize(int u, int v){
        int pu = findPar(u);
        int pv = findPar(v);
        if(pu == pv)
            return;

        if(size[pu] < size[pv]){
            parent[pu] = pv;
            size[pv] += size[pu];
        }
        else{
            parent[pv] = pu;
            size[pu] += size[pv];
        }
    }

    void unionRank(int u, int v){
        int pu = findPar(u);
        int pv = findPar(v);
        if(pu == pv)
            return;

        if(rank[pu] == rank[pv]){
            parent[pu] = pv;
            rank[pv]++;
        }
        else if(rank[pu] < rank[pv]){
            parent[pu] = pv;
        }
        else{
            parent[pv] = pu;
        }
    }
};

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, m;
    cin>>n>>m;
    vector<pair<int, pair<int, int>>> edges;
    for(int i=0; i<m; i++){
        int u, v, w;
        cin>>u>>v>>w;
        u--;v--;
        edges.push_back({w, {u, v}});
    }

    int sum = 0;
    dsu d(n);
    sort(edges.begin(), edges.end());
    for(auto it: edges){
        int w = it.first;
        int u = it.second.first;
        int v = it.second.second;

        if(d.findPar(u) != d.findPar(v)){
            sum += w;
            d.unionRank(u, v);
        }
    }

    int par = d.findPar(0);
    for(int i=1; i<n; i++){
        if(d.findPar(i) != par){
            cout<<"IMPOSSIBLE"<<endl;
            return 0;
        }
    }
    cout<<sum<<endl;

}