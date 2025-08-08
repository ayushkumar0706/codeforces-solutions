#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;

vector<long long>arr(n);
for(int i=0; i<n; i++)
cin>>arr[i];

sort(arr.begin(), arr.end());
long long ans = arr[0] *1ll* arr[n-1];

vector<long long>fact;
for(long long i=2; i*i<=ans; i++){
    if(ans%i == 0){
        fact.push_back(i);
        if(i != ans/i)
        fact.push_back(ans/i);
    }
}

sort(fact.begin(), fact.end());

for(long long i=0; i<n; i++){
    if(arr[i] != fact[i])
    {
        ans = -1;
        break;
    }
}


cout<<ans<<endl;
}
}