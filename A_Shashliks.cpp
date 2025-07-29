#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long long k, a, b, x, y;
cin>>k>>a>>b>>x>>y;

long long ans = 0;

if(k >= min(a, b)){
if(x < y){
    ans += (k - a) / x + 1;
    k -= (ans * x);
}
else{
    ans += (k - b) / y + 1;
    k -= (ans * y);
}
}

if(k >= a)
ans += (k - a) / x + 1;
if(k >= b)
ans += (k - b) / y + 1;

cout<<ans<<endl;
}
}