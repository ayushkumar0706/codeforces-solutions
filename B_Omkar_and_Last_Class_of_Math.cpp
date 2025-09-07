#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;

if(n%2 == 0){
    cout<<n/2<<" "<<n/2<<endl;
    continue;
}

long long fir = 1, sec = n-1;
for(long i = 2; i*i<=n; i++){
    if(n%i == 0){
        fir = n/i;
        sec = n-fir;
        break;
    }
}
cout<<fir<<" "<<sec<<endl;
}
}