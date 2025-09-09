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
        if(s[i] == '0')
        ans++;
    }

    int cnt = 0;
    for(int i=ans; i<n; i++){
        if(s[i] == '0')
        cnt++;
    }

    cout<<cnt<<endl;
}
}