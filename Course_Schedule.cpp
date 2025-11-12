#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
bool dfs(int curr, vector<vector<int>> &edges, vector<int> &vist, vector<int>&ans){
    vist[curr] = true;
    for(int e: edges[curr]){
        if(vist[e] == 0){
            if(dfs(e, edges, vist, ans))
            return true;
        }
        else  if(vist[e] == 1){
            return true;
        }
    }

    vist[curr] = 2;
    ans.push_back(curr+1);
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
}

int cnt = 0;
vector<int>visited(n, false);
vector<int>ans;
for(int i=0; i<n; i++){
    if(!visited[i]){
        if(dfs(i, edges, visited, ans)){
            cnt = 1;
            break;
        }
    }
}

if(cnt){
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}

reverse(ans.begin(), ans.end());
for(auto it: ans){
    cout<<it<<" ";
}

cout<<endl;

}