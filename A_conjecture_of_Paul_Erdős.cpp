#include<bits/stdc++.h>
using namespace std;

long long num = 1e7 + 1;
vector<long long>isprime(num, 1);

void sieve(){
    for(int i=2; i*i<=num; i++){
        if(isprime[i]){
            for(int j=i*i; j<=num; j+=i)
            isprime[j] = 0;
        }
    }
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;

long long ans = 0;
for(long long i=1; i*i+1<=n; i++){
    for(long long j=1; i*i+(j*j)*1ll*(j*j)<=n; j++){
        if(isprime[i*i + (j*j)*1ll*(j*j)])
        ans++;
    }
}

cout<<ans<<endl;

}
}