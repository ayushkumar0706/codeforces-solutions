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
set<int>st;
for(int i=0;i<n;i++){
cin>>arr[i];
st.insert(arr[i]);
}

int cnt = 0;
for(int i=0; i<=101; i++){
    if(st.find(i) == st.end()){
        cnt = i;
        break;
    }
}


cout<<cnt<<endl;

}
}