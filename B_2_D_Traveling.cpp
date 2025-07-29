#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--){
long long n,k,a,b;
cin>>n>>k>>a>>b;
vector<vector<long long>>arr(n, vector<long long>(2));
for(int i=0;i<n;i++){
cin>>arr[i][0]>>arr[i][1];
}

a--;b--;

long long int ans = abs(arr[a][0] - arr[b][0]) + abs(arr[a][1] - arr[b][1]);
long long mini_a = LLONG_MAX, mini_b = LLONG_MAX;
for(int i=0; i<k; i++){
    mini_a = min(mini_a, (abs(arr[i][0] - arr[a][0]) + abs(arr[i][1] - arr[a][1])));
    mini_b = min(mini_b, (abs(arr[i][0] - arr[b][0]) + abs(arr[i][1] - arr[b][1])));
}

if(k!=0)
cout<<min(ans, mini_a + mini_b)<<endl;
else
cout<<ans<<endl;
    
}
}