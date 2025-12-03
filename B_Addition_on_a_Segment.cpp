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

int cnt = 0, len = 0, one = 0;
for(int i=0; i<n; i++){
    cnt += arr[i];
    if(arr[i] > 0) len++;
}


int x = cnt - (n - 1);
int ans = (n, min(x, len));
cout<<ans<<endl;

}
}