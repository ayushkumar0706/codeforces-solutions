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
int n, m;
cin>>n>>m;
vector<pair<int, int>>arr(n);
for(int i=0;i<n;i++){
int x,y;
cin>>x>>y;
arr[i].first = x;
arr[i].second = y;
}

int ans = 0, prev = 0, cnt = 0;
for(int i=0; i<n; i++){
    int dist = arr[i].first - prev;
    int x = abs(arr[i].second-cnt);
    int side = dist;
    if((side%2) != (x%2)){
        side--;
    }
    ans += side;
    prev = arr[i].first;
    cnt = arr[i].second;
}

ans += m-prev;
cout<<(ans)<<endl;

}
}