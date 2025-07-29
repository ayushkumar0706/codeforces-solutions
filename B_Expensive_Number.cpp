#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
string s;
cin>>s;
    

long long n=s.size();
if(n==1){
    cout<<"0"<<endl;
    continue;
}

long long m=-1,ans=0;


for(int i=n-1;i>=0;i--){
    if(s[i]!='0'){
        m=i;
        break;
    }
}


for(int i=0;i<m;i++){
    if(s[i]!='0')
    ans++;
}
cout<<ans+n-m-1<<endl;
}
}