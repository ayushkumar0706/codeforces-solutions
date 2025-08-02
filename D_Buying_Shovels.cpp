#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long t;
cin>>t;
while(t--){
long long n, k;
cin>>n>>k;

if(n<=k)
cout<<"1"<<endl;
else{
    long long ans = 1;
    for(long long i=1; i*i<=n; i++){
        if(n%i == 0){
            if(i<=k)
            ans = i;
            if(n/i <= k){
                ans = n/i;
                break;
            }
        }
    }


    cout<<n/ans<<endl;
}
    
}
}