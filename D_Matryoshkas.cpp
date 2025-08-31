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
    mp[arr[i]]++;
}

int ans = 0, prev = *min_element(arr.begin(), arr.end());
int freq = 0;
for(auto it: mp){
    if(it.first == prev){
        freq = it.second;
        continue;
    }

    if(it.first == (prev + 1)){
        if(it.second < freq)
        ans += (freq - it.second);
    }
    else{
        ans += freq;
    }
    
    freq = it.second;
    prev = it.first;
}

ans += freq;
cout<<ans<<endl;
    
}
}