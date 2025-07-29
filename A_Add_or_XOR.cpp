#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long t;
cin>>t;
while(t--){
int a, b;
long long x, y;
cin>>a>>b>>x>>y;

if(a > b){
    if((a^1) == b)
    cout<<y<<endl;
    else
    cout<<"-1"<<endl;
    continue;
} 

long long ans = 0;
while(a != b){
    if(x <= y){
        ans += x;
    }
    else{
        if((a&1) == 0)
        ans += y;
        else ans += x;
    }
    a++;
}

cout<<ans<<endl;
    
}
}