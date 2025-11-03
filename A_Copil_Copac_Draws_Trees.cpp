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
unordered_set<int>st;
st.insert(1);
int cnt = 1;
for(int i=0; i<n-1; i++){
    int u, v;
    cin>>u>>v;
    if((st.find(u) == st.end()) && (st.find(v) == st.end())){
        cnt++;
    }
    st.insert(u);
    st.insert(v);
}

cout<<cnt<<endl;
}
}