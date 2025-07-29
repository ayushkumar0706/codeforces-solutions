#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--){
long long n, k;
cin>>n>>k;

string s;
cin>>s;

int cnt = 0;
for(auto it: s){
    if(it == '1')
    cnt++;
}

if(k>=cnt){
    cout<<"Alice"<<endl;
    continue;
}

if(n<(2*k))
cout<<"Alice"<<endl;
else
cout<<"Bob"<<endl;
    
}
}