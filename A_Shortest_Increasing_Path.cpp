#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--){
int x, y;
cin>>x>>y;

if(x == y){
    cout<<"-1"<<endl;
}
else if(x < y){
    cout<<"2"<<endl;
}
else{
    if((x-1) <= y || (y == 1))
    cout<<"-1"<<endl;
    else
    cout<<"3"<<endl;
}
    
}
}