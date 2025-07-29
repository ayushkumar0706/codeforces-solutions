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

int ans=2,cnt=2;
for(int i=0;i<n-1;i++){
    if(s[i]==s[i+1]){
        cnt++;
    }
    else{
        cnt=2;
    }
    ans=max(ans,cnt);
}

cout<<ans<<endl;
}
}