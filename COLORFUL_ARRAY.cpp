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

    void setParent(int u, int v){
        int pv = findPar(v);
        parent[u] = pv;
    }
};

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, m;
    cin>>n>>m;
    vector<pair<int, pair<int, int>>> qur;
    for(int i=0; i<m; i++){
        int l, r, c;
        cin>>l>>r>>c;
        l--;r--;
        qur.push_back({c, {l, r}});
    }

    dsu d(n+1);
    vector<int>color(n, 0);
    for(int q=m-1; q>=0; q--){
        int c = qur[q].first;
        int l = qur[q].second.first;
        int r = qur[q].second.second;

        int cur = d.findPar(l);
        while (cur <= r) {
            color[cur] = c;
            d.setParent(cur, (cur+1));  
            cur = d.findPar(cur);
        }
    }

    for(auto it: color)
    cout<<it<<endl;

}