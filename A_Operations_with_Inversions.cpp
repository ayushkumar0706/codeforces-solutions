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
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

int maxi = -1, ans = 0;
for(auto it: arr){
    if(it < maxi)
    ans++;
    maxi = max(maxi, it);
}

cout<<ans<<endl;

}
}