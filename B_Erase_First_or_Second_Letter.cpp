#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
    string s;
    cin>>s;
    long long ans = 0;
    unordered_set<char>st;
    for(int i=0; i<n; i++){
        st.insert(s[i]);
        ans += st.size();
    }

    cout<<ans<<endl;
}
}