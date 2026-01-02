#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n;
cin>>n;
vector<int>arr(n);
multiset<int>st;
for(int i=0; i<n; i++){
cin>>arr[i];

auto it = st.upper_bound(arr[i]);
if(it != st.end()){
    st.erase(it);
}
st.insert(arr[i]);

}

cout<<st.size()<<endl;

}