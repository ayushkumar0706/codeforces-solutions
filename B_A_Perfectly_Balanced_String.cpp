#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
long long t;
cin>>t;
while(t--){
string s;
cin>>s;

set<char>st;
for(auto it: s){
    st.insert(it);
}

int cnt = 1, n = s.size();
string t = "";
for(int i=0; i<n; i++){
    if(st.find(s[i]) != st.end()){
        t += s[i];
        st.erase(s[i]);
    }
    else  break;
}

int j = 0, m = t.size();
for(int i=0; i<n; i++){
    if(s[i] != t[j]){
        cnt = 0;
        break;
    }
    j++;
    if(j == m)
    j = 0;
}

if(cnt)
cout<<"YES"<<endl;
else cout<<"NO"<<endl;

}
}