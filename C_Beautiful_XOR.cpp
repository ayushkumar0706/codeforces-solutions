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
int a, b;
cin>>a>>b;

if(a == b){
    cout<<"0"<<endl;
    continue;
}

int n = (int)log2(a) + 1;
int maxi = 1LL << n;
if(b >= maxi){
    cout<<"-1"<<endl;
    continue;
}

int num = 1ll << (n-1);

if(b < num){
    cout<<"2"<<endl;
    cout<<((a-num)^b)<<" ";
    cout<<num<<endl;
}
else{
    cout<<"1"<<endl;
    cout<<(a^b)<<endl;
}
    
}
}