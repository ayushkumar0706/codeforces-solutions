#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long long a, b;
cin>>a>>b;

if(b>a)
swap(a,b);

long long ans = a - b;

cout<<ans<<" ";
if(ans == 0 || ans == 1){
    cout<<"0";
}
else{              
    long long ans1 = min(b%ans, ans - b % ans);                                       
    cout<<ans1;
}
  cout<<endl;  
}
}