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

map<char, int>mp;
for(auto it: s){
    mp[it]++;
}



cout<<n-mp[s[n-1]]<<endl;
}
}