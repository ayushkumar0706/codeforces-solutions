#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
long long n, k, q;
cin>>n>>k>>q;

vector<long long>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

long long cnt = 0, ans = 0;
for(int i=0; i<n; i++){
    if(arr[i]>q){
        if(cnt >= k){
            long long sum = (cnt - k + 1);
            ans += ((sum) * (sum + 1))/2;
        }

        cnt = 0;
    }
    else
    cnt++;
}

    if(cnt >= k){
        long long sum = (cnt - k + 1);
        ans += ((sum) * (sum + 1))/2;
    } 

    cout<<ans<<endl;
}
}