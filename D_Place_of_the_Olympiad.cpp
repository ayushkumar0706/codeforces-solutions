#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long long n,m,k;
cin>>n>>m>>k;

long long len = k / n + (k%n != 0);

long long space = m - len;

long long ans = (len) / (space + 1) + ((len % (space + 1)) != 0);

cout<<ans<<endl;
    
}
}