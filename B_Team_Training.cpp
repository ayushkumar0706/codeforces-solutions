#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long n,x;
cin>>n>>x;
vector<long>v(n);
for(int i=0;i<n;i++){
cin>>v[i];
}
  
sort(v.begin(),v.end());

int cnt=0,sum=0;
for(int i=n-1;i>=0;i--){
    if(v[i]>=x)
    cnt++;
    else{
        sum++;
    }

    if(sum*v[i]>=x){
        cnt++;
        sum=0;
    }

}

cout<<cnt<<endl;
}
}