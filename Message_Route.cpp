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
        u--; v--;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    vector<bool>visited(n, false);
    vector<int>parent(n, -1);
    queue<int>q;
    q.push(0);
    visited[0] = true;
    while(!q.empty()){
        int top = q.front();
        q.pop();
        
        for(int e: edges[top]){
            if(!visited[e]){
                visited[e] = true;
                q.push(e);
                parent[e] = top;
            }
        }
    }

    if(!visited[n-1]){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
        vector<int>ans;
        int curr = n-1;
        while(curr != -1){
            ans.push_back(curr+1);
            curr = parent[curr];
        }
        
        int k = ans.size();
        cout<<k<<endl;
        for(int i=k-1; i>=0; i--){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

}