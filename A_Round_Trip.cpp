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
int r, x, d, n;
cin>>r>>x>>d>>n;

string s; 
cin>>s;

int ans = 0;
for(int i=0; i<n; i++){
    if((s[i] == '2') && (r >= x))
    continue;
    ans++;
    r = max(0ll, r-d);
}

cout<<ans<<endl;
    
}
}