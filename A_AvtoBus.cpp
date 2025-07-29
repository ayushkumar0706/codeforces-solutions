#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
    
if(n==4){
    cout<<"1"<<" 1"<<endl;
    continue;
}

if(n==2||n%4&&n%6&&n%4!=2)
cout<<"-1";
else{
    if(n%6==0){
        cout<<n/6<<" ";
    }
    else{
        cout<<(n/6)+1<<" ";
    }
    cout<<(n/4);
}

cout<<endl;
}
}