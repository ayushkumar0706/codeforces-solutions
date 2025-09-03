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
map<int, int>mp;
for(int i=0;i<n;i++){
cin>>arr[i];
mp[arr[i]] = i+1;
}

int ans = 0;
for(int i=0; i<n-1; i++){
    int cnt = 1, num = arr[i];
    while((num *1ll* cnt) < (2*n)){
        if(cnt == num){cnt++; continue;}
        if(mp.find(cnt) != mp.end()){
            if((mp[cnt] + (i+1)) == (num *1ll* cnt))
            ans++;
        }
        cnt++;
    }
    mp.erase(num);
}

cout<<ans<<endl;
    
}
}