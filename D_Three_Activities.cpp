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
vector<pair<int, int>>arr(n), brr(n), crr(n);
for(int i=0;i<n;i++){
int x;
cin>>x;
arr[i].first = x;
arr[i].second = i;
}

for(int i=0;i<n;i++){
int x;
cin>>x;
brr[i].first = x;
brr[i].second = i;
}

for(int i=0;i<n;i++){
int x;
cin>>x;
crr[i].first = x;
crr[i].second = i;
}

sort(arr.begin(), arr.end(), greater<>());
sort(brr.begin(), brr.end(), greater<>());
sort(crr.begin(), crr.end(), greater<>());

int ans = 0;
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        for(int k=0; k<3; k++){
            int x = arr[i].second, y = brr[j].second, z = crr[k].second;

            if((x == y) || (y == z) || (z == x)) continue;

            ans = max(ans, (arr[i].first + brr[j].first + crr[k].first));
        }
    }
}

cout<<ans<<endl;

    
}
}