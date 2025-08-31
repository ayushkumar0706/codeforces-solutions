#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
long long n, x, y;
cin>>n>>x>>y;

long long lcm = (x*y) / __gcd(x, y);
long long a = n/x;
long long b = n/y;
long long c = n/lcm;
a -= c;
b -= c;

long long sum1 = ((a)*((2*n) - (a-1))) / 2;
long long sum2 = (b*(b+1))/2;

cout<<sum1 - sum2<<endl;
    
}
}