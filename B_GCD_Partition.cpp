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
vector<long long>arr(n);
long long total = 0;
for(int i=0;i<n;i++){
cin>>arr[i];
total += arr[i];
}

vector<long long>prefix(n, 0);
prefix[0] = arr[0];
for(int i=1; i<n; i++){
    prefix[i] = prefix[i-1] + arr[i];
}

long long ans = 1;
for(int i=0; i<n-1; i++){
    long long g = __gcd(prefix[i], (total - prefix[i]));
    ans = max(ans, g);
}

cout<<ans<<endl;

}
}