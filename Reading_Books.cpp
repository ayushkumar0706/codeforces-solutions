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
for(int i=0;i<n;i++){
cin>>arr[i];
}

sort(arr.begin(), arr.end());

int ans = 0;
for(int i=0; i<n-1; i++){
    ans += arr[i];
}

if(ans >= arr[n-1])
cout<<ans+arr[n-1]<<endl;
else cout<<(2*arr[n-1])<<endl;


}