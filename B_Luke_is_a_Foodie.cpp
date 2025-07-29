#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long long n,x;
cin>>n>>x;
vector<long long>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

long long ans = 0;
long long l = arr[0] - x;
long long r = arr[0] + x;

for(int i=1; i<n; i++){
    long long left = arr[i] - x;
    long long right = arr[i] + x;

    if(max(left, l)>=l && max(left, l)<=r && right>=l){
        l = max(left, l);
        r = min(right, r);
    }
    else{
        ans++;
        l = left;
        r = right;
    }
}

cout<<ans<<endl;
}
}