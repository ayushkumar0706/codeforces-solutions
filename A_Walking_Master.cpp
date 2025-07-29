#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(d<b){
        cout<<"-1"<<endl;
        continue;
    }
    int ans=0;
    ans+=(d-b);
    b+=ans;
    a+=ans;
    if(c>a){
        cout<<"-1"<<endl;
        continue;
    }

    ans+=a-c;
    cout<<ans<<endl;

    }
}