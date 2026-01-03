#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n;
cin>>n;
vector<pair<int, int>>arr(n);
for(int i=0; i<n; i++){
    cin>>arr[i].first;
    cin>>arr[i].second;
}

vector<int>idx(n);
iota(idx.begin(), idx.end(), 0);
sort(idx.begin(), idx.end(), [&](int i, int j){
    if(arr[i].first == arr[j].first)
    return arr[i].second > arr[j].second;
    return arr[i].first < arr[j].first;
});

vector<int>contained(n, 0), contains(n, 0);

int maxRight = -1;
for(auto it: idx){
    if(arr[it].second <= maxRight){
        contained[it] = 1;
    }
    maxRight = max(maxRight, arr[it].second);
}

int minRight = INT_MAX;
for(int i=n-1; i>=0; i--){
    if(arr[idx[i]].second >= minRight){
        contains[idx[i]] = 1;
    }
    minRight = min(minRight, arr[idx[i]].second);
}

for(auto it: contains)
cout<<it<<" ";
cout<<endl;

for(auto it: contained)
cout<<it<<" ";
cout<<endl;

}