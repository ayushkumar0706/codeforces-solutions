#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long t;
cin>>t;
while(t--){
long long a, b, k;
cin>>a>>b>>k;

long long x = gcd(a,b);

if(a/x <= k && b/x <= k){
    cout<<"1"<<endl;
}
else cout<<"2"<<endl;
    
}
}