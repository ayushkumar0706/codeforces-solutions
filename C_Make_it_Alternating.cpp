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
string s;
cin>>s;
int n = s.size();

int ans = 1, len = 1;
int mod =  998244353, cnt = 1;
for(int i=1; i<n; i++){
    if(s[i] != s[i-1]){
        len++;
        ans = (ans * cnt)%mod;
        cnt = 1;
    }
    else{
        cnt++;
    }
}

ans = (ans * cnt)%mod;
for(int i=1; i<=(n-len); i++){
    ans = (ans * i)%mod;
}

cout<<(n-len)<<" "<<ans<<endl;
    
}
}