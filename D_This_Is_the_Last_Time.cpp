#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long t;
cin>>t;
while(t--){
long long n, k;
cin>>n>>k;
vector<pair<long long, pair<long long, long long>>>arr(n);
for(int i=0; i<n; i++){
    cin>>arr[i].second.first;
    cin>>arr[i].second.second;
    cin>>arr[i].first;
}

sort(arr.begin(), arr.end());
long long ans = k;
int idx = 0;

for(int i=0; i<n; i++){
    if(arr[i].first == ans){
        idx = i;
        break;
    }
}


while(idx < n){
    if(ans >= arr[idx].second.first && ans <= arr[idx].second.second)
    ans = max(ans, arr[idx].first);
    idx++;
}

cout<<ans<<endl;
}
}