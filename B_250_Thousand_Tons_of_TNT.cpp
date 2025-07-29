#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<long long>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

vector<long long>prefix(n);
prefix[0] = arr[0];
for(int i=1; i<n; i++){
    prefix[i] = prefix[i-1] + arr[i];
}

int truck = n;
long long ans = 0;
while(truck > 1){
    int diff = n/truck;
    int idx = diff - 1;
    if(n%truck == 0){
        long long mini = LONG_LONG_MAX;
        long long maxi = LONG_LONG_MIN;
        long long prev = 0;
        while(idx < n){
            mini = min(mini, prefix[idx]-prev);
            maxi = max(maxi, prefix[idx]-prev);
            prev = prefix[idx];
            idx += diff;
        }

        ans = max(ans, maxi-mini);
    }
    truck--;
}

cout<<ans<<endl;
}
}