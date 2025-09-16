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
if(arr[i] != 0)
st.insert(arr[i]);
}

int l = -1, r = -1;
for(int i=0; i<n; i++){
    if((arr[i] == 0) || (arr[i] != (i+1))){
        if((arr[i] == 0) && (st.size() == (n-1)) && (st.find(i+1) == st.end())){
        continue;
        }
        if(l == -1)
        l = i;
        else r = i;
    }
}

int ans1 = 0;

if(l>=0 && r>=0)
ans1 = r-l+1;

cout<<ans1<<endl;
    
}
}