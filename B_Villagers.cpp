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

sort(arr.begin(), arr.end());
long long ans = 0;
int i = 0;
if(n%2== 1){
    ans = arr[0];
    i = 1;
}

for(int j = i; j < n; j += 2){
    ans += arr[j+1];
}

cout<<ans<<endl;
}
}