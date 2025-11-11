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
vector<int>arr(n);
map<int, int>mp;
for(int i=0; i<n; i++){
cin>>arr[i];
mp[arr[i]] = i+1;
}
string s;
cin>>s;
if((s[0] == '1') || (s[n-1] == '1') || (s[mp[1]-1] == '1') || (s[mp[n]-1] == '1')){
    cout<<"-1"<<endl;
    continue;
}
int l = min(mp[1], mp[n]);
int r = max(mp[1], mp[n]);
cout<<"5"<<endl;
cout<<l<<" "<<r<<endl;
cout<<"1 "<<l<<endl;
cout<<r<<" "<<n<<endl;
cout<<"1 "<<r<<endl;
cout<<l<<" "<<n<<endl;

}
}