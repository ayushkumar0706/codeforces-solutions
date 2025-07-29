#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long n,m,k;
cin>>n>>m>>k;

long cnt=k/n;
if(k%n!=0)
cnt++;

if(cnt>=m){
    cout<<m<<endl;
    continue;
}

if(m-cnt>=m/2){
    cout<<"1"<<endl;
    continue;
}
else{
    
}


    
}
}