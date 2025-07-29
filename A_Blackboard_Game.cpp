#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;

if(n<4){
    cout<<"Alice"<<endl;
    continue;
}

if(n%4 == 0)
cout<<"Bob"<<endl;
else
cout<<"Alice"<<endl;
}
}