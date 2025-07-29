#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
long long arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}

for(int i=0;i<n-1;i++){
    if(arr[i]==1){
        arr[i]+=1;
        if(i!=0){
        
        while(arr[i]==arr[i-1])
        arr[i]+=1;
        }
    }

    while(arr[i+1]%arr[i]==0){
        arr[i+1]+=1;
    }
}

for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
cout<<endl;
}
}