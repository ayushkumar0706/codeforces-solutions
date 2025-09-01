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
int n, s;
cin>>n>>s;
vector<int>arr(n), prefix(n);
int sum = 0, ans = 0;
for(int i=0;i<n;i++){
cin>>arr[i];

sum += arr[i];
prefix[i] = sum;
if(sum == s){
    ans = i;
}
}

if(sum < s){
    cout<<"-1"<<endl;
    continue;
}

ans = (n-ans-1);
for(int i=0; i<n; i++){
    if((prefix[n-1] - prefix[i] < s))
    break;
    // cout<<"i-"<<i<<" ";
    int idx = upper_bound(prefix.begin(), prefix.end(), (s + prefix[i])) - prefix.begin();
    ans = min(ans, ((i+1) + (n-idx)));
    // cout<<idx<<" ";
}


cout<<ans<<endl;
    
}
}