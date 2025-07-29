#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--){
int n;
cin>>n;

string s;
cin>>s;

map<char, int>mp;
for(auto it: s){
    mp[it]++;
}

int  ans = mp.size();
unordered_set<char>st;
for(int i=0; i<n-1; i++){
    st.insert(s[i]);
    mp[s[i]]--;
    if(mp[s[i]] <= 0)
    mp.erase(s[i]);

    ans = max(ans, (int)(mp.size() + st.size()));
}

cout<<ans<<endl;
}
}