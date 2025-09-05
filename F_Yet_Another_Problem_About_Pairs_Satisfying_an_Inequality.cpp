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

vector<int>index;
int m = 0, ans = 0;
for(int i=0; i<n; i++){
    if(arr[i] <= i){
        if(m > 0){
            int idx = lower_bound(index.begin(), index.end(), arr[i]) - index.begin();
            ans += idx;
        }
        index.push_back(i+1);
        m++;
    }
}

cout<<ans<<endl;
    
}
}