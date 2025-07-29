#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n, m;
cin>>n>>m;

string x,s;
cin>>x>>s;

int cnt=0;
for(int i=0;i<5;i++){
    if(x.find(s)!=-1){
        break;
    }
    else{
        cnt++;
        x+=x;
    }
}
if(x.find(s)!=-1)
cout<<cnt<<endl;
else
cout<<"-1"<<endl;
}
}