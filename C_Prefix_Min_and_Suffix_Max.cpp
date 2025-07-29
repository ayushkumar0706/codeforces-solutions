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

vector<int>prefix(n, 0);
vector<int>suffix(n, 0);

int mini = arr[0];
for(int i=0; i<n; i++){
    mini = min(mini, arr[i]);
    if(arr[i] == mini)
    prefix[i] = 1;
}

int maxi = arr[n-1];
for(int i=n-1;i>=0;i--){
    maxi = max(maxi, arr[i]);
    if(arr[i] == maxi)
    suffix[i] = 1;
}

vector<string>ans(n);
for(int i=0; i<n; i++){
    if(prefix[i] || suffix[i])
    ans[i] = "1";
    else
    ans[i] = "0";
}

for(int i=0;i<n;i++)
cout<<ans[i];
cout<<endl;
}
}