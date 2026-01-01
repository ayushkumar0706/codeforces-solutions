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

int ans = INT_MIN, sum = 0;
for(int i=0; i<n; i++){
    sum += arr[i];
    ans = max(ans, sum);
    if(sum < 0)
    sum = 0;
}

cout<<ans<<endl;

}