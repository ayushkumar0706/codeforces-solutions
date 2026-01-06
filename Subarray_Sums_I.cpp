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

unordered_set<int>st;
st.insert(0);

int pre = 0, ans = 0;
for(int i=0; i<n; i++){
    pre += arr[i];
    if(st.find(pre-x) != st.end())
    ans++;
    st.insert(pre);
}

cout<<ans<<endl;

}