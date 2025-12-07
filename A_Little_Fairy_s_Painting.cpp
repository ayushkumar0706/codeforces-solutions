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
unordered_set<int>st;
for(int i=0;i<n;i++){
cin>>arr[i];
st.insert(arr[i]);
}

sort(arr.begin(), arr.end());

int ans = st.size();
for(auto it: arr){
    if(it >= ans){
        ans = it;
        break;
    }
}

cout<<ans<<endl;

}
}