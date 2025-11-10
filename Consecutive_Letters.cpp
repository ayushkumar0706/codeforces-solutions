#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

struct CompareFirst {
    bool operator()(const pair<int,int>& a, const pair<int,int>& b) const {
        return a.first < b.first; 
    }
};

signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
int test = 0;
while(t--){
test++;
string s;
cin>>s;
int q;
cin>>q;
set<pair<int, int>, CompareFirst>st;
int j = 0, n = s.size();
for(int i=0; i<n; i=j){
    j = i+1;
    while((j<n) && (s[j] == s[i])){
        j++;
    }
    st.insert({i, j-1});
}

cout<<"Case "<<test<<":"<<endl;
while(q--){
    int d, idx;
    cin>>d>>idx;
    auto it = st.upper_bound({idx, 0});
    if(it == st.begin())
    continue;
    it--;
    int l = it->first;
    int r = it->second;
    if(d == 1){
        cout<<r-l+1<<endl;
    }
    else{
        st.erase(it);
        if(idx != l)
        st.insert({l, idx-1});
        if(idx != r)
        st.insert({idx+1, r});
    }
}
    
}
}