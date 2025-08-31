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

int ans = 2;
for(int i=1; i<=60; i++){
    int k = 1LL << i;
    unordered_set<int>st;
    for(auto it: arr){
        st.insert(it%k);
    }

    if(st.size() == 2){
        ans = k;
        break;
    }
}

cout<<ans<<endl;

}
}