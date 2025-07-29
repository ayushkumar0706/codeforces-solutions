#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;

int ans = n%10;
while(n){
    int rem = n%10;
    ans = min(ans, rem);
    n=n/10;
}

cout<<ans<<endl;
}
}