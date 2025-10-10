#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t, scenario = 0;
    cin>>t;
    while(t--){
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

    vector<int>color(n, 0);
    queue<int>q;

    int cnt = 0;
    for(int i=0; i<n; i++){
        if(color[i] != 0) continue;
        q.push(i);
        color[i] = 1;
        while(!q.empty()){
            int top = q.front();
            q.pop();
            for(int e: edges[top]){
                if(color[e] == 0){
                    color[e] = (color[top] == 1 ? 2 : 1);
                    q.push(e);
                }
                else if(color[e] == color[top]){
                    cnt = 1;
                    break;
                }
            }
            if(cnt) break;
        }
        if(cnt) break;
    }
    scenario++;

    cout<<"Scenario #"<<scenario<<":"<<endl;
    if(cnt){
        cout<<"Suspicious bugs found!"<<endl;
    }
    else{
        cout<<"No suspicious bugs found!"<<endl;
    }

}
}