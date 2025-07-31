#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long num = 1e9+1;
vector<bool>isprime(num, 1);
for(int i=2; i*i<=num; i++){
    if(isprime[i]){
        for(int j=i*i; j<=num; j+=i){
            isprime[j] = 0;
        }
    }
}

long long n;
cin>>n;
if(isprime[n]){
    cout<<"1"<<endl;
}
else{
    long long ans = 1;
    for(int i=2; i<=n-i; i++){
        if(isprime[i] && isprime[n-i]){
            ans = 2;
            break;
        }
    }

    if(ans == 2){
        cout<<ans<<endl;
    }
    else{
        cout<<"3"<<endl;
    }
}

}