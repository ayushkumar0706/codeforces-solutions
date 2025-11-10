#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
void dfs(int curr, vector<vector<int>> &edges, vector<int>&arr, vector<int> &vist, int &temp, int &ans){
    if(vist[curr] == 0)
    temp += arr[curr];
    ans = max(ans, temp);
    vist[curr]++;
    for(int e: edges[curr]){
        if(vist[e] < 2){
            dfs(e, edges, arr, vist, temp, ans);
        }
    }

    if(vist[curr] == 1){
        temp -= arr[curr];
        vist[curr]--;
    }
    if(vist[curr] == 2)
    vist[curr]--;
}
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, m;
cin>>n>>m;  
vector<int>arr(n);
for(int i=0; i<n; i++){
    cin>>arr[i];
}

vector<vector<int>>edges(n, vector<int>());
for(int i=0; i<m; i++){
    int u, v;
    cin>>u>>v;
    u--;v--;
    edges[u].push_back(v);
}

int ans = 0, temp = 0;
vector<int>visited(n, 0);
for(int i=0; i<n; i++){
    if(visited[i] == 0)
    dfs(i, edges, arr, visited, temp, ans);
}

cout<<ans<<endl;

}