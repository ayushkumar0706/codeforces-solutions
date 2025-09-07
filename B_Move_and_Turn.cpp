#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n;
cin>>n;

int k = n/2;
if((n%2))
cout<<(2*(k+1)*(k+2))<<endl;
else cout<<(k+1)*(k+1)<<endl;
    
}