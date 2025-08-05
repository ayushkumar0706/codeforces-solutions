#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long n;
cin>>n;

vector<long long>arr(n);
for(int i=0; i<n; i++)
cin>>arr[i];

vector<long long>ans(n, arr[n-1]);
long long g = arr[n-1];
for(int i=n-2; i>=0; i--){
    g = __gcd(arr[i], g);
    ans[i] = g;
}

g = 0;
for(int i=0; i<n-1; i++){
    g = __gcd(g, (arr[i]*1ll*ans[i+1])/ans[i]);
}

cout<<g<<endl;

}