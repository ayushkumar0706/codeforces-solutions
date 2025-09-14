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
int n, k;
cin>>n>>k;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

if(k > 2){
    cout<<"0"<<endl;
    continue;
}

sort(arr.begin(), arr.end());
int ans = arr[0];
if(k == 1){
    for(int i=0; i<n-1; i++)
    ans = min(ans, arr[i+1] - arr[i]);
    cout<<ans<<endl;
    continue;
}

ans = arr[0];
for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
    int diff = arr[j] - arr[i];
    ans = min(ans, diff);
    if(ans == 0)
    break;
    int idx = lower_bound(arr.begin(), arr.end(), diff) - arr.begin();
    if(arr[idx] == diff){
        ans = 0;
        break;
    }
    if(idx != 0){
        ans = min(ans, min(abs(arr[idx]-diff), abs(arr[idx-1]-diff)));
    }
    else
    ans = min(ans, abs(arr[0] - diff));
    }
}

cout<<ans<<endl;
    
}
}