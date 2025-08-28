#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
long long t;
cin>>t;
while(t--){
long long a,b,c,d;
cin>>a>>b>>c>>d;

c -= a;
d -= b;
if(max(a,b) > ((2*min(a, b)) + 2) || max(c,d) > ((2*min(c, d)) + 2))
cout<<"NO"<<endl;
else cout<<"YES"<<endl;    
}
}