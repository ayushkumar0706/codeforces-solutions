#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool dfs(int curr, vector<vector<int>> &edges, vector<bool> &vist, int parent, vector<int> &ans){
    vist[curr] = true;
    ans.push_back(curr);
    
    for(int e: edges[curr]){
        if(e == parent) continue;
        if(!vist[e]){
            if(dfs(e, edges, vist, curr, ans))
            return true;
        }
        else{
            ans.push_back(e);
            return true;
        }
    }

    ans.pop_back();
    return false;
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, m;
    cin>>n>>m;
    vector<vector<int>>edges(n, vector<int>());
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        u--;v--;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    vector<bool>visited(n, false);
    vector<int>ans;
    for(int i=0; i<n; i++){
        if(!visited[i]){
            if(dfs(i, edges, visited, -1, ans)){
                int m = ans.size();
                int idx=0;
                for(int i=0; i<m; i++){
                    if(ans[m-1] == ans[i]){
                        idx = i;
                        break;
                    }
                }
                cout<<m-idx<<endl;
                for(int i=idx; i<m; i++)
                cout<<ans[i]+1<<" ";
                cout<<endl;
                return 0;
            }
        }
    }

    cout<<"IMPOSSIBLE"<<endl;

}