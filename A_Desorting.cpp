#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n],ans=0;
int diff=INT_MAX;
for(int i=0;i<n;i++){
cin>>arr[i];
}

  for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        ans=-1;
        break;
    }
    diff=min(diff,arr[i+1]-arr[i]);
  }  
  if(ans==-1)
  cout<<"0"<<endl;
  else{
    cout<<diff/2+1<<endl;
  }
}
}