#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, k;
cin>>n>>k;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

map<int, int>mp;
set<int>st;
int j = 0;

for(int i=0; i<k; i++){
    st.insert(i);
}

for(int i=0; i<k; i++){
    if(arr[i] < k){
        st.erase(arr[i]);
        mp[arr[i]]++;
    }
}

if(st.empty())
cout<<k<<" ";
else cout<<*st.begin()<<" ";

for(int i=k; i<n; i++){
    if(arr[j] < k){
        mp[arr[j]]--;
        if(mp[arr[j]] == 0)
        st.insert(arr[j]);
    }
    st.erase(arr[i]);
    mp[arr[i]]++;
    j++;
    if(st.empty())
    cout<<k<<" ";
    else cout<<*st.begin()<<" ";
}

}