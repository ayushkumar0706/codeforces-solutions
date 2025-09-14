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
int n, m, x, y;
cin>>n>>m>>x>>y;
vector<int>arr(n), brr(m);
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<m;i++){
cin>>brr[i];
}

cout<<(n+m)<<endl;
    
}
}