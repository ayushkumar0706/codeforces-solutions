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
long long sum = 0, neg = 0, zero = 0, mini = LLONG_MAX;
for(int i=0;i<n;i++){
cin>>arr[i];
if(arr[i] < 0)
neg++;
if(arr[i] == 0)
zero = 1;
sum += abs(arr[i]);
mini = min(mini, abs(arr[i]));
}

if(zero || neg%2 == 0){
    cout<<sum<<endl;
    continue;
}


cout<<sum - (2*mini)<<endl;

}
}