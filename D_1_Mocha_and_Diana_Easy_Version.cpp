#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
void dfs(int curr, vector<vector<int>> &edges, vector<bool> &vist, int cnt, vector<int> &comp){
    vist[curr] = true;
    comp[curr] = cnt;

    for(int e: edges[curr]){
        if(!vist[e]){
            dfs(e, edges, vist, cnt, comp);
        }
    }
}

signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, m1, m2;
cin>>n>>m1>>m2;
vector<vector<int>>edges1(n, vector<int>());
vector<vector<int>>edges2(n, vector<int>());
for(int i=0; i<m1; i++){
    int u, v;
    cin>>u>>v;
    u--;v--;
    edges1[u].push_back(v);
    edges1[v].push_back(u);
}

for(int i=0; i<m2; i++){
    int u, v;
    cin>>u>>v;
    u--;v--;
    edges2[u].push_back(v);
    edges2[v].push_back(u);
}

vector<bool>vist1(n, false);
vector<bool>vist2(n, false);
vector<int>comp1(n, 0);
vector<int>comp2(n, 0);
int cnt1 = 1, cnt2 = 1;
for(int i=0; i<n; i++){
    if(!vist1[i]){
        dfs(i, edges1, vist1, cnt1, comp1);
        cnt1++;
    }
}

for(int i=0; i<n; i++){
    if(!vist2[i]){
        dfs(i, edges2, vist2, cnt2, comp2);
        cnt2++;
    }
}

int size = min(cnt1, cnt2) - 2; 
cout<<size<<endl;
for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
        if((comp1[i] != comp1[j]) && (comp2[i] != comp2[j])){
            cout<<i+1<<" "<<j+1<<endl;
            int comp = comp1[j];
            for(int k=0; k<n; k++){
                if(comp1[k] == comp)
                comp1[k] = comp1[i]; 
            }

            comp = comp2[j];
            for(int k=0; k<n; k++){
                if(comp2[k] == comp)
                comp2[k] = comp2[i]; 
            }
        }
    }
}

}