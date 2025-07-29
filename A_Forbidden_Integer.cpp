#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n,k,x;
cin>>n>>k>>x;

if(k-1==0){
cout<<"NO"<<endl;
continue;
}
if(k-1==1&&n%2==x%2&&x==1){
cout<<"NO"<<endl;
continue;
}

cout<<"YES"<<endl;
if(x!=1){
    cout<<n<<endl;
    while(n--)
    cout<<"1 ";
}
else{
    cout<<n/2<<endl;
    if(n%2==0){
        while(n>0){
            cout<<"2 ";
            n-=2;
        }
    }
    else{
        cout<<"3 ";
        n-=3;
         while(n>0){
            cout<<"2 ";
            n-=2;
        }
    }
}
cout<<endl;

}
}