#include<bits/stdc++.h>
using namespace std;

long long sq_root(long long n){
    long long low = 0, high = n, ans = 1;
    while(low <= high){
        long long mid = low + (high-low)/2;
        if(mid *1ll*  mid <= n && mid<=1e9){
            ans = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }

    return ans;
}

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

long long low = 0, high = sq_root(c);
long long res = 0;
while(low <= high){
    long long mid = low + (high - low)/2;
    long long ans = 0;
    for(int i=0; i<n; i++){
        ans += ((arr[i]+2*mid) *1ll* (arr[i]+2*mid));
        if(ans > c)
        break;
    }

    if(ans<=c){
        res = mid;
        low = mid + 1;
    }
    else high = mid - 1;
}

cout<<res<<endl;
    
}
}