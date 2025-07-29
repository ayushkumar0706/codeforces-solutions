#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;

string s;
cin>>s;

int ans=n;
int start=0,end=n-1;

while(start<end){
    if(s[start]==s[end])
    break;
    ans-=2;
    start++;end--;
}

cout<<ans<<endl;
}
}