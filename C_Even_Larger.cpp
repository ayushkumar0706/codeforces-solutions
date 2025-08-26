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
for(int i=0;i<n;i++){
cin>>arr[i];
}

long long k = 0;
for(int i=1; i<n; i+=2){
    if(i+1 < n){
        if((arr[i+1] + arr[i-1]) > arr[i]){
            k += (arr[i+1]+arr[i-1]-arr[i]);
            long long c = 0;
            if(arr[i-1] > arr[i]){
            c = (arr[i-1] - arr[i]);
            }
            arr[i+1] -= (arr[i+1]+arr[i-1]-arr[i]-c);
        }
    }
    else{
        if(arr[i-1]>arr[i]){
        k += (arr[i-1] - arr[i]);
        }
    }
}

cout<<k<<endl;
}
}