#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n;
cin>>n;
vector<int>arr(n);
map<int, int>mp;
for(int i=0;i<n;i++){
    cin>>arr[i];
    mp[arr[i]]++;
}

sort(arr.begin(), arr.end());
int ans = 0, el = arr[n/2];

for(int i=0; i<n; i++){
    ans += (abs(el - arr[i]));
}

cout<<ans<<endl;

}