#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
cin>>v[i];
}

int seg = 1;
unordered_set<int>st1,st2;
st1.insert(v[0]);

for(int i=1;i<n;i++){
    st2.insert(v[i]);
    if(st1.find(v[i])!=st1.end()){
        st1.erase(v[i]);
    }

    if(st1.empty()){
        seg++;
        st1 = st2;
        st2.clear();
    }
}

cout<<seg<<endl;
}
}