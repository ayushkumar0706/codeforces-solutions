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

sort(arr.begin(), arr.end());
int cnt = INT_MIN;
for(int i=0; i<n; i+=2){
    cnt = max(cnt, abs(arr[i+1] - arr[i]));
}

cout<<cnt<<endl;
    
}
}