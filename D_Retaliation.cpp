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
 
int x2 = ((2*v[0])-v[1])/(n+1);
int x1 = v[1] - v[0] + x2;

if((2*v[0])-v[1]<0 || ((2*v[0])-v[1])%(n+1) || (v[1]-v[0]+x2)<0){
    cout<<"NO"<<endl;
    continue;
}

int cnt = 0;
for(int i=0; i<n; i++){
    if((v[i] - x1*(i+1) - x2*(n-i) )!=0){
        cnt = 1;
        break;
    }
}

if(cnt == 1)
cout<<"NO"<<endl;
else
cout<<"YES"<<endl;

}
}