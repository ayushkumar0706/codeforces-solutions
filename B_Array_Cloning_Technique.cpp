#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long n;
cin>>n;
vector<long>v(n);
for(int i=0;i<n;i++){
cin>>v[i];
}

sort(v.begin(),v.end());
long maxi=1,freq=1;
for(int i=0;i<n-1;i++){
    if(v[i]==v[i+1]){
        freq++;
        maxi=max(freq,maxi);
    }
    else{
        freq=1;
    }
}

long ans=0;
while(maxi<n){
    ans++;
    if(2*maxi<=n)
    ans+=maxi;
    else{
        ans+=(n-maxi);
    }
    maxi*=2;
}

cout<<ans<<endl;
}
}