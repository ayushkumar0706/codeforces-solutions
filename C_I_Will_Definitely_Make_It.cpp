#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n, k;
cin>>n>>k;
vector<long long>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

long long num = arr[k-1];
sort(arr.begin(), arr.end());

int idx = 0, cnt = 1;
for(int i=0; i<n; i++){
    if(arr[i] == num){
        idx=i;
        break;
    }
}

while(idx < n-1){
    while(idx<n-1 && arr[idx] == arr[idx+1])
    idx++;

    if(idx < n-1 && cnt <= arr[idx] && (arr[idx+1]-arr[idx])+cnt <= arr[idx]+1){
        cnt += (arr[idx+1]-arr[idx]);
        idx++;
    }
    else break;
}

if(idx == n-1)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
}