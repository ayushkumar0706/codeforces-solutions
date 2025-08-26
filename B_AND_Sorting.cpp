#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

long long ans = (1<<30) - 1;
for(int i=0; i<n; i++){
    if(i != arr[i]){
    ans &= arr[i];
    }
}

cout<<ans<<endl;
}
}