#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int x[4] = {0, 0, -1, 1};
int y[4] = { -1, 1, 0, 0};
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, m;
cin>>n>>m;
int rowa, rowb;
int cola, colb;
vector<vector<char>>mat(n, vector<char>(m));
for(int i=0; i<n; i++){
   for(int j=0; j<m; j++){
       cin>>mat[i][j];
       if(mat[i][j] == 'A'){
        rowa = i;
        cola = j;
       }
       else if (mat[i][j] == 'B'){
        rowb = i;
        colb = j;
       }
   }
}

queue<pair<int, int>>q;
vector<vector<bool>>vist(n, vector<bool>(m, false));
vector<vector<pair<int, int>>>parent(n, vector<pair<int, int>>(m, {-1, -1}));

q.push({rowa, cola});
vist[rowa][cola] = true;

while(!q.empty()){
    auto top = q.front();
    q.pop();
    int i = top.first;    
    int j = top.second;    

    for(int k=0; k<4; k++){
        if(((i+x[k]) >= 0) && ((i+x[k]) < n) && ((j+y[k]) >= 0) && (j+y[k]) < m){
            if((mat[i+x[k]][j+y[k]] != '#') && !vist[i+x[k]][j+y[k]]){
                vist[i+x[k]][j+y[k]] = true;
                parent[i+x[k]][j+y[k]] = {i, j};
                q.push({(i+x[k]), (j+y[k])});
            }
        }
    }
}

if(!vist[rowb][colb]){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
    vector<pair<int, int>>ans;
    while(true){
        ans.push_back({rowb, colb});
        if ((rowb == rowa) && (colb == cola)) break;
        auto k = parent[rowb][colb];
        rowb = k.first;
        colb = k.second;
    }
    int k = ans.size();
    cout<<k-1<<endl;
    reverse(ans.begin(), ans.end());

    string path;
    for (int i = 1; i < k; i++) {
        int dx = ans[i].first - ans[i - 1].first;
        int dy = ans[i].second - ans[i - 1].second;

        if (dx == -1 && dy == 0) path += 'U';
        else if (dx == 1 && dy == 0) path += 'D';
        else if (dx == 0 && dy == -1) path += 'L';
        else if (dx == 0 && dy == 1) path += 'R';
    }
    cout << path << endl;
    
}


}