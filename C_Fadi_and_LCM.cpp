#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long n;
cin>>n;
    
long long a = 1, b = n;

for(long long i=2; i*i<n; i++){
    if(n%i == 0){
        if(__gcd(i, n/i) == 1){
        a = i;
        b = n/i;
        }
    }
}

cout<<a<<" "<<b<<endl;

}