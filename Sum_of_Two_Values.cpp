#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, x;
cin>>n>>x;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

map<int, int>mp;
for(int i=0; i<n; i++){
    if(mp.find(x - arr[i]) != mp.end()){
        cout<<mp[x-arr[i]]+1<<" "<<i+1<<endl;
        return 0;
    }

    mp[arr[i]] = i;
}

cout<<"IMPOSSIBLE"<<endl;

}