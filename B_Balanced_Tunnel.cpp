#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n;
cin>>n;
vector<int>arr(n), brr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
cin>>brr[i];
}

unordered_set<int>st;
unordered_set<int>exit;
int ans = 0;
int i=0, j=0;
while(i < n && j < n){
    if(exit.find(arr[i]) != exit.end()){
        i++;
        continue;
    }
    st.insert(arr[i]);
    if(st.find(brr[j]) == st.end()){
        exit.insert(brr[j]);
        ans++;
        // cout<<ans<<"-"<<i<<" "<<j<<"| ";
        j++;
        continue;
    }
    exit.insert(brr[j]);
    i++;
    j++;
}

cout<<ans<<endl;
    
}
