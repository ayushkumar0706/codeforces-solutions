#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
long long t;
cin>>t;
while(t--){
long long n, a, b;
cin>>n>>a>>b;

if(a>=b){
    if(n%2 == a%2 && a%2 == b%2)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
else{
    if(b%2 == n%2)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
    
}
}