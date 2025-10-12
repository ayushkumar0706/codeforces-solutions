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
int x, y, z;
cin>>x>>y>>z;

int a = x|z;
int b = y|x;
int c = y|z;

if(((a&b) == x) && ((b&c) == y) && (a&c) == z)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
    
}
}