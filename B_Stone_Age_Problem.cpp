#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, q;
cin>>n>>q;
vector<int>arr(n);
vector<vector<int>>mat(q);
int sum = 0;
for(int i=0;i<n;i++){
cin>>arr[i];
sum += arr[i];
}

for(int i=0; i<q; i++){
    int t;
    cin>>t;
    mat[i].push_back(t);
    int idx,x;
    if(t == 1){
        cin>>idx>>x;
        mat[i].push_back(idx);
    }
    else{
        cin>>x;
    }
    mat[i].push_back(x);
}


int idx, x;
map<int, int>mp;
int current = 0;
for(int i=0; i<q; i++){
    int k = mat[i][0];
    if(k == 1){
        idx = mat[i][1], x = mat[i][2];
        if(mp.find(idx-1) == mp.end()){
            if(current != 0)
            sum -= current;
            else sum -= arr[idx-1];
        }
        else{
            sum -= mp[idx-1];
        }
        sum += x;
        mp[idx-1] = x;
        cout<<sum<<endl;
    }
    else{
        x = mat[i][1];
        sum = n*1ll*x;
        current = x;
        mp.clear();
        cout<<sum<<endl;
    }
}
    
}
