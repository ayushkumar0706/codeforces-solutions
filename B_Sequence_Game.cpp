#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
    vector<int>v;
    for(int i=0;i<n;i++){
        if(i==0)
        v.push_back(arr[i]);
        else{
        if(arr[i]>=arr[i-1])
        v.push_back(arr[i]);
        else{
        v.push_back(1);
        v.push_back(arr[i]);
        }
        }
    }
    cout<<v.size()<<endl;
    for(auto it:v)
    cout<<it<<" ";
    cout<<endl;
}
}