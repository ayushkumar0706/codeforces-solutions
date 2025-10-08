#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int x[4] = {0, 0, -1, 1}; 
int y[4] = {1, -1, 0, 0}; 

void dfs(pair<int, int>p, vector<vector<char>> &mat, vector<vector<bool>> &vist){
    vist[p.first][p.second] = true;
    int i = p.first;
    int j = p.second;

    for(int k=0; k<4; k++){
        if(((i+x[k]) >= 0) && ((i+x[k]) < (int)mat.size()) && ((j+y[k]) >= 0) && ((j+y[k]) < (int)mat[0].size())){
            if((mat[i+x[k]][j+y[k]] != '#') && !vist[i+x[k]][j+y[k]]){
                dfs({(i+x[k]), (j+y[k])}, mat, vist);
            }
        }
    }
}

signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, m;
cin>>n>>m;
vector<vector<char>>mat(n, vector<char>(m));
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>mat[i][j];
    }
}

int cnt = 0;
vector<vector<bool>>vist(n, vector<bool>(m, false));
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if((mat[i][j] != '#') && (!vist[i][j])){
            dfs({i,j}, mat, vist);
            cnt++;
        }
    }
}

cout<<cnt<<endl;

}
