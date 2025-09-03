#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--){
int n, x;
cin>>n>>x;
vector<int>arr(n), prefix(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

int ans = 0;
sort(arr.begin(), arr.end());

prefix[0] = arr[0];
for(int i=1; i<n; i++){
    prefix[i] = prefix[i-1] + arr[i];
}

int prev = 0, days;
for(int i=n-1; i>=0; i--){
    if((x - (prefix[i] + (prev*(i+1)))) < 0) continue;

    days = (x - prefix[i]) / (i+1);
    ans += ((days - prev + 1) * (i+1));
    prev = days + 1;
}

cout<<ans<<endl;
    
}
}