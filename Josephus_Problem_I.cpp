#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n;
cin>>n;
set<int>st;
for(int i=1; i<=n; i++)
st.insert(i);

auto it = st.begin();
while(!st.empty()){
    it++;
    if(it == st.end())
    it = st.begin();

    cout<<*it<<" ";
    it = st.erase(it);
    if((it == st.end()) && (!st.empty())){
        it = st.begin();
    }
}

cout<<endl;

}