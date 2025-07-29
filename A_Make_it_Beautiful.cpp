#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;

vector<int>arr(n,0);
for(int i=0;i<n;i++)
cin>>arr[i];

sort(arr.rbegin(),arr.rend());

if(arr[0]==arr[n-1]){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
    if(arr[0]==arr[1])
    swap(arr[0],arr[n-1]);

    for(auto it:arr){
        cout<<it<<" ";
    }cout<<endl;
}
}
}