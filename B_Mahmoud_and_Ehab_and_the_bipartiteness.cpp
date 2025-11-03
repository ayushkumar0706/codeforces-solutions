#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    cin>>n;
    vector<vector<int>>edges(n, vector<int>());
    for(int i=0; i<n-1; i++){
        int u, v;
        cin>>u>>v;
        u--;v--;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    vector<int>color(n, 0);
    queue<int>q;
    q.push(0);
    color[0] = 1;
    while(!q.empty()){
        int top = q.front();
        q.pop();
        for(int e: edges[top]){
            if(color[e] == 0){
                color[e] = (color[top] == 1 ? 2 : 1);
                q.push(e);
            }
        }
    }

    int x = 0;
    for(auto it: color){
        if(it == 1)
        x++;
    }

    cout<<(x*(n-x)) - (n-1)<<endl;

}