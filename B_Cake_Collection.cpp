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
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

sort(arr.begin(), arr.end());
int ans = 0;
for(int i=n-1; i>=0; i--){
    if(m == 0)
    break;
    ans += (arr[i]*m);
    m--;
}

cout<<ans<<endl;
    
}
}