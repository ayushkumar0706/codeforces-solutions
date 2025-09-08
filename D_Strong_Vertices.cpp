#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>brr(n), ans;
vector<pair<int, int>>arr(n);
for(int i=0;i<n;i++){
int x;
cin>>x;
arr[i].first = x;
arr[i].second = i+1;
}

for(int i=0;i<n;i++){
cin>>brr[i];
arr[i].first -= brr[i];
}

sort(arr.begin(), arr.end(), [](pair<int, int>a, pair<int, int>b){
    if(a.first == b.first)
    return a.second < b.second;
    return a.first > b.first;
});

ans.push_back(arr[0].second);
for(int i=1; i<n; i++){
    if(arr[i].first == arr[0].first)
    ans.push_back(arr[i].second);
    else
    break;
}

cout<<ans.size()<<endl;
for(auto it: ans)
cout<<it<<" ";
cout<<endl;
    
}
}