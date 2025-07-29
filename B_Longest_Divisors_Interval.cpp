#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
long long n;
cin>>n;

long long sq=sqrt(n);
if(sq>100)
sq=100;

long long cnt=0,ans=1;

for(int i=1;i<=sq+1;i++){
    if(n%i==0){
        cnt++;
        ans=max(ans,cnt);
    }
    else cnt=0;
}

cout<<ans<<endl;
}
}