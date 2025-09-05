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
int n,k;
cin>>n>>k;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

vector<int>bits(31, 0);
for(int i=0; i<n; i++){
    int cnt = 0, x = arr[i];
    while(x){
        if((x&1)){
            bits[cnt]++;
        }
        x = x>>1;
        cnt++;
    }
}

int ans = 0;
for(int i=30; i>=0; i--){
    int cnt = (n-bits[i]);
    if(k >= cnt){
        ans = ans|(1<<i);
        k -= cnt;
    }
}

cout<<ans<<endl;
    
}
}