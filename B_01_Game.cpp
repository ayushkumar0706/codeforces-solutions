#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--){
string s;
cin>>s;
int n = s.size();

int ones = 0, zero = 0;
for(auto it: s){
    if(it=='1')
    ones++;
    else zero++;
}

int m = min(ones,zero);

if(m%2 != 0)
cout<<"DA"<<endl;
else
cout<<"NET"<<endl;
}
}