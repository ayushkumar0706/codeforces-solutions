#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long long n, x, y, sum = 0;
cin>>n>>x>>y;
vector<long long>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
sum += arr[i];
}

sort(arr.begin(), arr.end());
long long ans = 0;
for(int i=0; i<n; i++){
    long long new_sum = sum - arr[i];
    int start = i+1, end = n - 1;
    int ind1 = i+1, ind2 = i;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(new_sum - arr[mid] >= x && new_sum - arr[mid] <= y){
            ind1 = mid;
            end = mid - 1;
        }
        else if(new_sum - arr[mid] >= y)
        start = mid + 1;
        else end = mid - 1;
    }
    // cout<<ind1<<" ";

    start = ind1, end = n - 1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(new_sum - arr[mid] >= x && new_sum - arr[mid] <= y){
            ind2 = mid;
            start = mid + 1;
        }
        else if(new_sum - arr[mid] >= y)
        start = mid + 1;
        else end = mid - 1;
    }
    // cout<<ind2<<" |";

    ans += (ind2 - ind1 + 1);
}

cout<<ans<<endl;
    
}
}