#include<bits/stdc++.h>
using namespace std;

long long exp(long long n, long long x){
    if(x == 1)
    return n;

    if(x%2 == 0)
    return exp(n*n, x/2);
    else
    return n* exp(n*n, x/2);
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long t;
cin>>t;
while(t--){
long long n, x;
cin>>n>>x;

long long ans = exp(n, x);
cout<<ans<<endl;
    
}
}