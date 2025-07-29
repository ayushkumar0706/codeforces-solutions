#include<bits/stdc++.h>
using namespace std;

bool ispowerOfTwo(long long n){
    return ((n & (n-1)) == 0);
}

int main()
{
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;

cout<<(ispowerOfTwo(n) ? "NO" : "YES") << endl;
}
}