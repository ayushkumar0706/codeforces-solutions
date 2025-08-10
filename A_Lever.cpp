#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>arr(n), brr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
cin>>brr[i];
}

int ans = 1;
for(int i=0; i<n; i++){
    if(arr[i] > brr[i])
    ans += (arr[i]-brr[i]);
}

cout<<ans<<endl;
    
}
}