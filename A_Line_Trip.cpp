#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n, x;
cin>>n>>x;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
if(n==1){
    cout<<max(arr[0],2*(x-arr[0]))<<endl;
    continue;
}

int tank=max(arr[0],2*(x-arr[n-1]));
for(int i=0;i<n-1;i++){
    tank=max(tank,arr[i+1]-arr[i]);
}
cout<<tank<<endl;
}
}