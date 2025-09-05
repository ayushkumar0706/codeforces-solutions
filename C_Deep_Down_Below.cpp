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
vector<pair<int,int>>arr(n);
for(int i=0;i<n;i++){
    int k;
    cin>>k;
    int maxi = INT_MIN;
    for(int j=0; j<k; j++){
        int x;
        cin>>x;
        maxi = max(maxi, (x-(j-1)));
    }
    arr[i].first = maxi;
    arr[i].second = k;
}

sort(arr.begin(), arr.end(), [](pair<int, int>a, pair<int, int>b){
    if(a.first != b.first)
    return a.first < b.first;
    return a.second > b.second;
});

int ans = arr[0].first;
int power = ans;
for(int i=0; i<n; i++){
    if(power < arr[i].first){
        int extra = (arr[i].first - power);
        ans += extra;
        power += extra;
    }
    power += arr[i].second;
}

cout<<ans<<endl;
    
}
}