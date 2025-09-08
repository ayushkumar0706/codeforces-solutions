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
int a, b;
cin>>a>>b;

int ans = -1;

if((a&1) && (b&1))
ans = (a*b) + 1;
else{
    if(!(b&1)){
        if(((b/2) & 1)){
            if(!(a&1))
            ans = (a*b)/2 + 2;
        }
        else
        ans = (a*b)/2 + 2;

    }
}

cout<<ans<<endl;
    
}
}