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

map<int, int>mp;
for(int i=0; i<n; i++){
    int num = arr[i], cnt  = 0;
    while(num){
        if((num & 1)){
            mp[cnt]++;
        }
        cnt++;
        num = num>>1;
    }
}

for(int k=1; k<=n; k++){
    int cnt = 1;
    for(auto it: mp){
        if((it.second % k) != 0){
            cnt = 0;
            break;
        }
    }
    if(cnt)
    cout<<k<<" ";
}

cout<<endl;
    
}
}