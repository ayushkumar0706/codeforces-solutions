#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--){
long long n, x, y;
cin>>n>>x>>y;

int cnt = 0;

for(int i=1; i<=100; i++){
if(i!=n){
long long d1 = abs(x - n);    
long long d2 = abs(y - n);

long long d3 = abs(i-x);
long long d4 = abs(i-y);

if(d3<d1 && d4<d2){
    cnt = 1;
    break;
}
}
}
if(cnt == 1){
    cout<<"YES"<<endl;
}
else cout<<"NO"<<endl;
}
}