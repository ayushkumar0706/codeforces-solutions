#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
double n;
cin>>n;
    
double sum=(n*(n+1))/2;
double sq=sqrt(sum);
if(sq*sq==sum){
    cout<<"-1"<<endl;
    continue;
}

sum=3;
cout<<"2 "<<"1 ";
for(int i=3;i<=n;i++){
    sum+=i;
    sq=sqrt(sum);
    if(sq*sq==sum){
        cout<<i+1<<" ";
        cout<<i<<" ";
        sum+=i+1;
        i++;
    }
    else
    cout<<i<<" ";
}

cout<<endl;

}
}