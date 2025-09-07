#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
string s;
cin>>s;
int n = s.size();

vector<int>left(n,0), right(n,0);
int cnt = 0;
for(int i=0; i<n-1; i++){
    if(s[i] == s[i+1] && s[i]=='v')
    cnt++;
    else{
        if(s[i+1] == 'o')
        left[i+1] = cnt;
    }
}

cnt = 0;
for(int i=n-1; i>0; i--){
    if(s[i] == s[i-1] && s[i]=='v')
    cnt++;
    else{
        if(s[i-1] == 'o')
        right[i-1] = cnt;
    }
}

int ans = 0;
for(int i=2; i<n-2; i++){
    if(s[i] == 'o'){
        ans += (left[i]*right[i]);
    }
}

cout<<ans<<endl;

}