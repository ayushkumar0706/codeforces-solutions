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
    int n;
    cin>>n;

    dsu d(n);
    vector<pair<int, int>> old;
    for(int i=0; i<n-1; i++){
        int u, v;
        cin>>u>>v;
        u--;v--;
        if(d.findPar(u) != d.findPar(v)){
            d.unionRank(u, v);
        }
        else{
            old.push_back({u, v});
        }
    }

    unordered_set<int>st;
    vector<int>temp;
    for(int i=0; i<n; i++){
        int parent = d.findPar(i);
        if(st.find(parent) == st.end()){
            st.insert(parent);
            temp.push_back(parent);
        }
    }

    cout<<temp.size()-1<<endl;
    for(int i=0; i<temp.size()-1; i++){
        cout<<old[i].first+1<<" "<<old[i].second+1<<" ";
        cout<<temp[i]+1<<" "<<temp[i+1]+1<<endl;
    }

}