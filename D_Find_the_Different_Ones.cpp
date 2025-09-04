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
vector<int>arr(n+1);
for(int i=1;i<=n;i++){
    cin>>arr[i];
}

int q;
cin>>q;
vector<vector<int>>queries(q+1, vector<int>(2, 0));
for(int i=1; i<=q; i++){
    cin>>queries[i][0];
    cin>>queries[i][1];
}

vector<int>prefix;
for(int i=1; i<n; i++){
    if(arr[i] != arr[i+1]){
        prefix.push_back(i);
    }
}

for(int i=1; i<=q; i++){
    int l = queries[i][0], r = queries[i][1];
    auto idx = lower_bound(prefix.begin(), prefix.end(), l);
    if(idx != prefix.end() && *idx < r){
        cout << *idx << " " << *idx + 1 << endl;
    }
    else{
        cout << "-1 -1" << endl;
    }
}
cout<<endl;
    
}
}