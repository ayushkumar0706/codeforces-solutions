#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

long long ans = 1, cnt = 0;
sort(arr.begin(), arr.end());
for(int i=0; i<n; i++){
    if(arr[i] > ans){
        cnt = 1;
        break;
    }

    if(i != 0)
    ans += arr[i];
}

if(cnt == 1)
cout<<"NO"<<endl;
else cout<<"YES"<<endl;
    
}
}