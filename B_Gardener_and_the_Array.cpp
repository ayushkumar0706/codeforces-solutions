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
map<int, int>mp;
vector<vector<int>>arr(n);
for(int i=0; i<n; i++){
    int k;
    cin>>k;
    int cnt = 0;
    arr[i].push_back(k);
    for(int j=0; j<k; j++){
        int x;
        cin>>x;
        arr[i].push_back(x);
        mp[x]++;
    }
}

int check = 0;
for(int i=0; i<n; i++){
    int m = arr[i][0];
    int cnt = 0;
    for(int j=1; j<=m; j++){
        if(mp[arr[i][j]] == 1){
            cnt = 1;
            break;
        }
    }
    if(cnt == 0){
        check = 1;
        break;
    }
}

if(check)
cout<<"Yes"<<endl;
else cout<<"No"<<endl;
    
}
}