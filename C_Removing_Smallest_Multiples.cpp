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
string s;
cin>>s;

int ans = 0;
for(int i=0; i<n; i++){
    if(s[i] == '0' || s[i] == 'c'){
        int x = i+1, mul = x;
        while((x-1) < n && (s[x-1] == '0' || s[x-1] == 'c')){
            if(s[x-1] == '0')
            ans += mul;
            s[x-1] = 'c';
            x += mul;
        }
    }
}

cout<<ans<<endl;
    
}
}