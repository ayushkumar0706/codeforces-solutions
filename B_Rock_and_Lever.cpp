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
vector<int>arr(n), bit(30, 0);
for(int i=0;i<n;i++){
cin>>arr[i];
bit[log2(arr[i])]++;
}

int ans = 0;
for(auto it: bit){
    int cnt = (it *1ll* (it-1))/2;
    ans += cnt;
}

cout<<ans<<endl;
    
}
}