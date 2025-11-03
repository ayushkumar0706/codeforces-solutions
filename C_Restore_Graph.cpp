#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, k;
cin>>n>>k;
int cnt = 0;
vector<pair<int, int>>arr(n);
for(int i=0;i<n;i++){
int x;
cin>>x;
arr[i].first = x;
arr[i].second = i;

if(x == 0){
    cnt++;
}
}

sort(arr.begin(), arr.end());
for(int i=1; i<n; i++){
    if(abs(arr[i].first - arr[i-1].first) > 1){
        cnt = 0;
        break;
    }
}

if(cnt != 1){
    cout<<"-1"<<endl;
    return 0;
}

map<int, int>mp;
for(int i=0; i<n; i++){
    if(mp.find(arr[i].first) == mp.end())
    mp[arr[i].first] = i;
}

vector<vector<int>>edges(n, vector<int>());
int prev = 0;
for(int i=1; i<n; i++){
    if((arr[i].first - arr[prev].first) != 1){
        prev = mp[arr[i].first-1];
    }
    edges[arr[prev].second].push_back(arr[i].second);
    prev++;
}

int r = 0;
for(int i=0; i<n; i++){
    int size = edges[i].size();
    if(size >= k && (i != (arr[0].second))){
        cnt = 0;
        break;
    }
    else if (size > k && (i == arr[0].second)){
        cnt = 0;
        break;
    }
    if(size != 0)
    r += size;
}

if(cnt != 1){
    cout<<"-1"<<endl;
    return 0;
}

cout<<r<<endl;
for(int i=0; i<n; i++){
    for(int j=0; j<edges[i].size(); j++){
        cout<<(i+1)<<" "<<(edges[i][j]+1)<<endl;
    }
}

}
