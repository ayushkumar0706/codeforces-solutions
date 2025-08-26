#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>arr(n), ind(1001, 0);
for(long long i=0;i<n;i++){
cin>>arr[i];
ind[arr[i]] = max(ind[arr[i]], (i+1)); 
}

long long ans = -1;
for(long long i=1; i<=1000; i++){
    if(ind[i] != 0){
        for(long long j=i; j<=1000; j++){
            if(ind[j] != 0 && __gcd(i, j) == 1){
                ans = max(ans, (ind[i] + ind[j]));
            }
        }
    }
}

cout<<ans<<endl;

}
}