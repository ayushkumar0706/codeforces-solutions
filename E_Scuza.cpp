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
int n, q;
cin>>n>>q;
vector<int>arr(n), steps(q), prefix(n), maxi(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<q;i++){
cin>>steps[i];
}

prefix[0] = arr[0];
for(int i=1; i<n; i++){
    prefix[i] = prefix[i-1] + arr[i];
}

maxi[0] = arr[0];
for(int i=1; i<n; i++){
   maxi[i] = max(maxi[i-1], arr[i]);
}

for(int i=0; i<q; i++){
    int idx = upper_bound(maxi.begin(), maxi.end(), steps[i]) - maxi.begin();
    if(idx > 0){
        cout<<prefix[idx-1]<<" ";
    }
    else cout<<"0 ";
}

cout<<endl;
    
}
}