#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, k, x;
cin>>n>>k>>x;
vector<int>arr(n), diff(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

int ans = 1;
sort(arr.begin(), arr.end());
for(int i=0; i<n-1; i++){
    diff[i] = arr[i+1] - arr[i];
}
sort(diff.begin(), diff.end());

for(int i=0; i<n; i++){
    if(diff[i] > x){
        int cnt = ((diff[i]/x) + ((diff[i]%x) != 0) - 1);
        if(cnt > k)
        ans++;
        else k -= cnt;
    }
}

cout<<ans<<endl;
    
}