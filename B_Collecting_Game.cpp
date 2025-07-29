#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<pair<long long, int>>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i].first;
arr[i].second = i;
}

sort(arr.begin(), arr.end());
vector<long long>ans(n, 0);

vector<long long>prefix_sum(n, arr[0].first);
for(int i=1; i<n; i++){
    prefix_sum[i] = prefix_sum[i-1] + arr[i].first;
}

ans[arr[n-1].second] = n-1;

for(int i=n-2; i>=0; i--){
    long long start = i, end = n-1;
    while(start <= end){
        long long mid = start + (end - start) / 2;
        if(prefix_sum[i] >= arr[mid].first){
            ans[arr[i].second] = max(mid, ans[arr[mid].second]);
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
}

for(int i=0; i<n; i++){
    cout<<ans[i]<<" ";
}
cout<<endl;
}
}