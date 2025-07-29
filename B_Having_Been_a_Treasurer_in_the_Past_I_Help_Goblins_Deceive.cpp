#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
    string s;
    cin>>s;

    long long upper=0,lower=0;
    for(auto it : s){
        if(it=='-')
        upper++;
    }

    lower=n-upper;
    long long ans=(upper-upper/2)*(upper/2);
    cout<<ans*lower<<endl;
}
}
