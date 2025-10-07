#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, m;
    cin>>n>>m;
    vector<vector<int>>edges(n, vector<int>());
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    vector<bool>visited(n, false);
    queue<int>q;
    q.push(0);
    visited[0] = true;
    while(!q.empty()){
        int top = q.front();
        q.pop();
        cout<<top<<" ";
        for(int e: edges[top]){
            if(!visited[e]){
                visited[e] = true;
                q.push(e);
            }
        }
    }

}