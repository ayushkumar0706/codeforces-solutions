#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int a,b,c;
cin>>a>>b>>c;

int anna=a+c;
int kat=b+c;

if(anna>kat)
cout<<"First"<<endl;
else if(anna==kat){
    if(c%2==0)
    cout<<"Second"<<endl;
    else
    cout<<"First"<<endl;
}
else
cout<<"Second"<<endl;
    
}
}