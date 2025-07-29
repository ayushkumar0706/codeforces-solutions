#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long n;
cin>>n;
if(n<3){
    cout<<n+1<<endl;
    continue;
}
else if(n>=3&&n<15){
    cout<<"3"<<endl;
    continue;
}  
 
int ans=1;
ans+=((n/15)*3);
if(n%15==1)
ans++;
if(n%15>1)
ans+=2;

    cout<<ans<<endl;
}
}