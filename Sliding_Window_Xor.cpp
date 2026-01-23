#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, k;
cin>>n>>k;

int x, a, b, c;
cin>>x>>a>>b>>c;

vector<int>arr(n), pre(n);
arr[0] = x;
pre[0] = x;
for(int i=1; i<n; i++){
    arr[i] = ((a*arr[i-1])%c+b)%c;
    pre[i] = (pre[i-1] ^ arr[i]);
}

int ans = pre[k-1];
for(int i=k; i<n; i++){
    int temp = (pre[i]^pre[i-k]);
    ans = ans ^ temp;
}

cout<<ans<<endl;
    
}