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
int a, b;
cin>>a>>b;

int num = (a*b)/__gcd(a,b);
if(a == b)
cout<<"0"<<endl;
else{
    if(max(a, b) == num)
    cout<<"1"<<endl;
    else
    cout<<"2"<<endl;
}
    
}
}