#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n, k;
cin>>n>>k;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

int even = 0;
int ans = INT_MAX;
for(int i=0; i<n; i++){
    if(arr[i]%k == 0){
        ans = 0;
        break;
    }
    if(arr[i] % 2 == 0)
    even++;
    ans = min(ans,  (k - (arr[i]%k)));
}

if(k == 4){
    if(even >= 2)
    even = 2;
    cout<<min(ans, (2 - even))<<endl;
}
else
cout<<ans<<endl;
    
}
}