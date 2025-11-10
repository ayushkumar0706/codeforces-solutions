#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MAX = 50005;

int parent[MAX], rel[MAX];

int find(int curr){
    if(parent[curr] == curr) return curr;
    int root = find(parent[curr]);
    rel[curr] = (rel[curr] + rel[parent[curr]])%3;
    return parent[curr] = root;
}

bool unite(int d, int x, int y){
    int px = find(x), py = find(y);
    if(px == py){
        if(d == 1){
            return ((rel[x] - rel[y] + 3)%3) == 0;
        }
        else{
            return ((rel[x] - rel[y] + 3)%3) == 1;
        }
    }

    parent[px] = py;

    if(d == 1){
        rel[px] = (rel[y] - rel[x] + 3)%3;
    }
    else{
        rel[px] = (rel[y] + 1 - rel[x] + 3)%3;
    }

    return true;
}

signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--){
int n, k;
cin>>n>>k;

int ans = 0;
for(int i=1; i<=n; i++){
    parent[i] = i;
    rel[i] = 0; 
}
while(k--){
    int type, x, y;
    cin>>type>>x>>y;

    if((x > n) || (y > n) || ((type == 2) && (x == y))){
        ans++;
    }
    else{
        if(!unite(type, x, y))
        ans++;
    }
}
  

cout<<ans<<endl;
}
}