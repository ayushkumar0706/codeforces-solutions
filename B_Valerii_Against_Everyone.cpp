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
vector<long long>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}
sort(arr.begin(), arr.end());
long long ans = 0;
for(int i=0; i<n-1; i++){
    if(arr[i] == arr[i+1]){
        ans = 1;
        break;
    }
}
if(ans)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
}