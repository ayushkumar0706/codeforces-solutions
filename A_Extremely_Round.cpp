#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;

int cnt=0;
while(n>9){
    cnt++;
    n/=10;
}
int ans;
ans=(cnt*9)+n;


cout<<ans<<endl;
}
}