#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
cin>>v[i];
}   
    if(n==1){
        cout<<v[0]<<endl;
        continue;
    }
    if(n==2){
        cout<<v[0]+v[1]-1<<endl;
        continue;
    }

    int i=2,sum=v[0]+v[1]-1;
    while(i<n){
        sum=sum+v[i]-1;
        i++;
    }

    cout<<sum<<endl;
}
}