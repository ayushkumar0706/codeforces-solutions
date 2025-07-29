#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--){
string s;
cin>>s;
long long n = s.size();

long long ones = 0, zero = 0;
for(auto it: s){
    if(it == '1')
    ones++;
    else
    zero++;
}
int i = 0;
while(ones || zero && i<n){
    if(s[i] == '1' && zero)
    zero--;
    else if(s[i] == '0' && ones)
    ones--;
    else
    break;
    i++;
}

cout<<n - i<<endl;
}
}