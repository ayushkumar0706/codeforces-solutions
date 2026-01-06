#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, k;
cin>>n>>k;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

map<int, int>mp;

int l = 0, ans = 0, dist = 0;
for(int i=0; i<n; i++){
    if(mp.find(arr[i]) == mp.end())
    dist++;
    mp[arr[i]]++;

    while(dist > k){
        mp[arr[l]]--;
        if(mp[arr[l]] == 0){
            mp.erase(arr[l]);
            dist--;
        }
        l++;
    }

    ans += (i - l + 1);
}

cout<<ans<<endl;

}