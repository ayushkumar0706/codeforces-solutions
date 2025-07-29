#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

sort(arr.begin(), arr.end());

long long ans = 0;
for(int k=2; k<n; k++){
    int l=0, r = k-1;

    for(int i=l; i<r; i++){
        for(int j=i+1; j<=r; j++){
            if(arr[i]+arr[j] > arr[k])
            ans++;
        }
    }
}


}
}