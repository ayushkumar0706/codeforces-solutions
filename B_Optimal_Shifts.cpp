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

int ans = 0, cnt = 0;
for(int i=0; i<n; i++){
    if(s[(i+n)%n] == '0')
    cnt++;
    else cnt = 0;
    ans = max(ans, cnt);
}

int pre = 0, suff = 0;
for(int i=0; i<n && s[i] == '0'; i++) pre++;
for(int i=n-1; i>=0 && s[i] == '0'; i--) suff++;

cout<<max(ans, pre + suff)<<endl;

}
}