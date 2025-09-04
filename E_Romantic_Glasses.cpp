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
int sum = 0;
map<int, int>mp;
for(int i=0;i<n;i++){
cin>>arr[i];
}

int cnt = 0;
for(int i=0; i<n; i++){
    if(i%2 == 0)
    sum += arr[i];
    else
    sum -= arr[i];
    mp[sum]++;
    if(sum == 0 || mp[sum] > 1){
        cnt = 1;
        break;
    }
}

if(cnt)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
    
}
}