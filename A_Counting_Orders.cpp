#include<bits/stdc++.h>
using namespace std;
int main()
{

long long mod = 1e9 + 7;
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>arr(n), brr(n);
for(int i=0; i<n; i++)
cin>>arr[i];
for(int j=0; j<n; j++)
cin>>brr[j];

sort(arr.begin(), arr.end());
sort(brr.begin(), brr.end(), greater<int>());

long long ans = 1;
for(int i=0; i<n; i++){
    int idx = upper_bound(arr.begin(), arr.end(), brr[i]) - arr.begin();
    long long freq = n - idx - i;

    ans = (ans * freq) % mod;
}

if(ans)
cout<<ans<<endl;
else
cout<<"0"<<endl;


}
}