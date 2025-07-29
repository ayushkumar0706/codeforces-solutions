#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long t;
cin>>t;
while(t--){
long long n, c;
cin>>n>>c;

vector<long long>arr(n);
for(int i=0; i<n; i++)
cin>>arr[i];

sort(arr.begin(), arr.end());
long long ans = 0, i=n-1;
for(i=n-1; i>=0; i--){
    if(arr[i] <= c){
        break;
    }
}
ans = (n-i-1);
int cnt = 1;
while(i>=0){
    if(arr[i]*cnt>c){
        ans++;
    }
    else
    cnt*=2;
    i--;
}

cout<<ans<<endl;
    
}
}