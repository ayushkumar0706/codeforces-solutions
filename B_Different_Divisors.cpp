#include<bits/stdc++.h>
using namespace std;


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long num = 1e6;
vector<long long>prime(num+1, 1);

for(long long i=2; i*i<=num; i++){
    if(prime[i]){
        for(long long j=i*i; j<=num; j+=i){
            prime[j] = 0;
        }
    }
}

vector<long long>primes;
for(long long i=2; i<=num; i++){
    if(prime[i])
    primes.push_back(i);
}


long long t;
cin>>t;
while(t--){
long long n;
cin>>n;

long long target = n+1, ans1 = LLONG_MAX;
long long start = 0, end = primes.size() - 1;
while(start <= end){
    long long mid = start + (end-start) / 2;
    if(primes[mid] >= target){
        end = mid - 1;
        ans1 = min(ans1, primes[mid]);
    }
    else{
        start = mid + 1;
    }
}

long long ans2 = LLONG_MAX;
target = ans1 + n;
end = primes.size() - 1;
while(start <= end){
    long long mid = start + (end-start) / 2;
    if(primes[mid] >= target){
        end = mid - 1;
        ans2 = min(ans2, primes[mid]);
    }
    else{
        start = mid + 1;
    }
}

long long ans = ans1 *1LL* ans2;
cout<<ans<<endl;
}
}