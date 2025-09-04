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
vector<pair<int, int>>arr(n);
for(int i=0;i<n;i++){
int x;
cin>>x;
arr[i].first = x;
arr[i].second = i;
}

sort(arr.begin(), arr.end());
if(arr[0].first == arr[n-1].first){
    cout<<"NO"<<endl;
    continue;
}

cout<<"YES"<<endl;
int cnt = 1;
for(int i=0; i<n-1; i++){
    int x = arr[i].first;
    int fir = arr[i].second;
    int idx = upper_bound(arr.begin(), arr.end(), make_pair(x, LLONG_MAX)) - arr.begin();
    if(idx != n){
        cout<<fir+1<<" "<<(arr[idx].second + 1)<<endl;
        cnt++;
    }
    else{
        i++;
        while(i < n && cnt < n){
            cout<<(arr[i].second + 1)<<" "<<(arr[0].second + 1)<<endl;
            cnt++;
            i++;
        }
        break;
    }
}
    
}
}