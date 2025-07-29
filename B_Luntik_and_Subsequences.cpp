#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;

vector<long long>v(n);
for(long long i=0;i<n;i++){
cin>>v[i];
}

long long cnt0 = 0, cnt1 = 0;
for(long long i=0; i<n; i++){
    if(v[i] == 0)
    cnt0++;
     if(v[i] == 1)
     cnt1++;
}

if(cnt1 == 0){
    cout<<"0"<<endl;
    continue;
}

long long ans1 = pow(2, cnt0);
long long ans = ans1 * (cnt1);
cout<<ans<<endl;;
    
}
}