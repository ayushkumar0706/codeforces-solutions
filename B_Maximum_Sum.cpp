#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
long long n, k;
cin>>n>>k;
vector<long long>arr(n), prefix(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

sort(arr.begin(), arr.end());
prefix[0] = arr[0];
for(int i=1; i<n; i++){
    prefix[i] = prefix[i-1] + arr[i];
}

long long ans = 0;
for(int i=0; i<=k; i++){
    int left = (2*i) - 1;
    int right = (n-1-(k-i));

    long long sum;
    if(i != 0)
    sum = prefix[right] - prefix[left];
    else 
    sum = prefix[right];
    
    ans = max(ans, sum);
}

cout<<ans<<endl;

}
}