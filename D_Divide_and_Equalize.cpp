#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
const int N = 1e6 + 5;
vector<int>spf(N);

    for (int i = 2; i < N; i++) spf[i] = i;
    for (int i = 2; i * i < N; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j < N; j += i){
            if (spf[j] == j) spf[j] = i;
            }
        }
    }

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
    int x = arr[i];
    while(x != 1){
        mp[spf[x]]++;
        x /= spf[x];
    }
}

int cnt = 1;
for(auto it: mp){
    int freq = it.second;
    if(((freq%n) != 0)){
        cnt = 0;
        break;
    }
}

if(cnt)
cout<<"YES"<<endl;
else cout<<"NO"<<endl;
    
}
}