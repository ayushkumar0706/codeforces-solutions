#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n;
cin>>n;
vector<int>arr(n);
map<int, int>mp;

int len = 0, cnt = 0, ind = 0;
for(int i=0;i<n;i++){
cin>>arr[i];
if((mp.find(arr[i]) != mp.end()) && (mp[arr[i]] >= ind)){
    ind = mp[arr[i]];
    cnt = i - ind;
    mp[arr[i]] = i;
    continue;
}

mp[arr[i]] = i;
cnt++;
len = max(len, cnt);
}

cout<<len<<endl;

}