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
int n,k;
cin>>n>>k;

int ans = 1;
int mod = 1e9 + 7;
for(int i=0; i<k; i++){
    ans = (ans * n)%mod;
}

cout<<ans<<endl;
}
}