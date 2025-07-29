#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
long long x, y, a, b;
cin>>x>>y>>a>>b;

vector<int>arr(n);
for(int i=0; i<n; i++)
cin>>arr[i];

long long ans = 0;
for(auto it: arr){
    ans += (it*1ll*it);
}

long long dist = abs(a-x)*abs(a-x) + abs(b-y)*abs(b-y);

if(dist > ans){
    cout<<"NO"<<endl;
}
else{
    if(dist != 0)
}
    
}
}