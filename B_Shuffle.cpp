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
int n, x, m;
cin>>n>>x>>m;
int ans = 1;
int left = x, right = x;
for(int i=1;i<=m;i++){
    int l,r;
    cin>>l>>r;
    int st = max(left, l), end = min(right, r);
    if(st <= end){
        left = min(left, l), right = max(right, r);
        ans = (right - left + 1);
    }
}

cout<<ans<<endl;
    
}
}