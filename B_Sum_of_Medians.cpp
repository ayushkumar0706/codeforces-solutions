#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--){
long long n, k;
cin>>n>>k;
long long arr[n*k];
for(int i=0; i<n*k; i++){
    cin>>arr[i];
}

long long cnt = (n - ((n/2) + (n%2 != 0))) + 1;
long long sum = 0, i = n*k - cnt;
while(k--){
    sum += arr[i];
    i -= cnt;
}

cout<<sum<<endl;
}
}