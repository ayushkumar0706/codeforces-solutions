#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int x[4] = {0, 0, -1, 1};
int y[4] = {1, -1, 0, 0};

signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--){
int n, m;
cin>>n>>m;
int a = 0;
vector<vector<char>>mat(n, vector<char>(m));
for(int i=0; i<n; i++){
   for(int j=0; j<m; j++){
    cin>>mat[i][j];
    if(mat[i][j] == 'G')
    a = 1;
   }
}

if(!a){
    cout<<"Yes"<<endl;
    continue;
}

int cnt = 0;
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if(mat[i][j] == 'B'){
            for(int k=0; k<4; k++){
                if(((i+x[k]) >= 0) && ((i+x[k]) < n) && ((j+y[k]) >= 0) && (j+y[k]) < m){
                    if(mat[i+x[k]][j+y[k]] == '.')
                    mat[i+x[k]][j+y[k]] = '#';
                    else if(mat[i+x[k]][j+y[k]] == 'G'){
                        cnt = 1;
                        break;
                    }
                }
            }
        }
    }
}

if(cnt){
    cout<<"No"<<endl;
    continue;
}

if(mat[n-1][m-1] == '#' && a){
    cout<<"No"<<endl;
    continue;
}

vector<vector<bool>>vist(n, vector<bool>(m, false));
queue<pair<int, int>>q;
q.push({(n-1), (m-1)});
vist[n-1][m-1] = true;

while(!q.empty()){
    auto top = q.front();q.pop();
    int i = top.first;
    int j = top.second;

    for(int k=0; k<4; k++){
        if(((i+x[k]) >= 0) && ((i+x[k]) < n) && ((j+y[k]) >= 0) && (j+y[k]) < m){
            if(!vist[i+x[k]][j+y[k]] && mat[i+x[k]][j+y[k]] != '#'){
                vist[i+x[k]][j+y[k]] = true;
                q.push({(i+x[k]), (j+y[k])});
            }
            
        }
    }
}

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if((mat[i][j] == 'G') && (!vist[i][j])){
            cnt = 1;
            break;
        }
    }
    if(cnt) break;
}

if(cnt)
cout<<"No"<<endl;
else
cout<<"Yes"<<endl;

}
}