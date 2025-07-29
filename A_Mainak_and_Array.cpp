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

int mind=-1,maxd=-1;
int mini=INT_MAX,maxi=INT_MIN;
for(int i=0;i<n;i++){
    if(arr[i]<mini){
        mini=arr[i];
        mind=i;
    }
    if(arr[i]>=maxi){
        maxi=arr[i];
        maxd=i;
    }
}

if(mind==0||maxd==n-1){
    cout<<maxi-mini<<endl;
    continue;
}

int ans1=arr[n-1]-arr[0];
for(int i=1;i<n;i++){
    ans1=max(ans1,arr[i-1]-arr[i]);
}
int ans2=*max_element(arr.begin()+1,arr.end())-arr[0];
int ans3=arr[n-1]-(*min_element(arr.begin(),arr.end()-2));

cout<<max(ans1,max(ans2,ans3))<<endl;
}
}