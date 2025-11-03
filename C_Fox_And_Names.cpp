#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
bool dfs(int curr, vector<vector<int>> &edges, vector<int> &state, vector<int> &ans){
    state[curr] = 1;
    for(int e: edges[curr]){
        if(state[e] == 0){
            if(dfs(e, edges, state, ans))
            return 1;
        }
        else if(state[e] == 1){
            return 1;
        }
    }

    state[curr] = 2;
    ans.push_back(curr);
    return 0;
}
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n;
cin>>n;
vector<vector<int>>edges(26, vector<int>());
vector<string>arr(n);
for(int i=0; i<n; i++){
    cin >> arr[i];
}

for(int i=0; i<n-1; i++){
    string r = arr[i];
    string t = arr[i+1];

    int j = 0;
    int m = r.size(), p = t.size();
    while((j < m) && (j < p) && (r[j] == t[j])){
        j++;    
    }

    if((j == p)){
        cout<<"Impossible"<<endl;
        return 0;
    }

    if(j < m)
    edges[r[j] - 'a'].push_back(t[j] - 'a');
}

vector<int>state(26, false);
vector<int>ans;
for(int i=0; i<26; i++){
    if(state[i] == 0){
        if(dfs(i, edges, state, ans)){
            cout<<"Impossible"<<endl;
            return 0;
        }
    }
}

reverse(ans.begin(), ans.end());
for(auto it: ans){
    cout<<char('a' + it);
}

cout<<endl;

}