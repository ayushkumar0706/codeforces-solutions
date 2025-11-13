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

    int getSize(int node) {
        int par = findPar(node);
        return size[par];
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
    dsu d(n);
    int comp = n, ans = 1;
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        u--;v--;
        if(d.findPar(u) != d.findPar(v)){
            comp--;
            d.unionSize(u, v);
            ans = max(ans, d.getSize(d.findPar(u)));
        }
        cout<<comp<<" "<<ans<<endl;
    }

}