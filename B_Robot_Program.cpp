#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long long n,x,k;
cin>>n>>x>>k;

string s;
cin>>s;

long long copy=x;
long long ans=0;
for(auto it:s){
    if(copy==0)
    break;
    if(it=='L')
    copy--;
    else copy++;
    k--;

}

ans++;
if(copy!=0){
    cout<<"0"<<endl;
    continue;
}

long long sec=0;
copy=0;

for(auto it:s){
    if(it=='L')
    copy--;
    else copy++;
    sec++;
    if(copy==0)
    break;
}

if(copy!=0){
    cout<<ans<<endl;
    continue;
}
ans+=(k/sec);
cout<<ans<<endl;
    
}
}