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
for(int i=0;i<n;i++){
    int x, y;
    cin>>x>>y;
    arr[i].first = x;
    arr[i].second = y;
}

sort(arr.begin(), arr.end(), [](auto &a, auto &b){
    return a.second < b.second;
});

int ans = 1, end = arr[0].second;

for(int i=1; i<n; i++){
    if(arr[i].first >= end){
        ans++;
        end = arr[i].second;
    }
}

cout<<ans<<endl;

}