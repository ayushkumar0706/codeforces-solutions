#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n, k;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];

int cnt=0;
for(int i=1;i<n;i++){
    if(arr[i]<arr[i-1]){
        cnt=1;
        break;
    }
}
    if(cnt==0){
        cout<<"YES"<<endl;
        continue;
    }

    if(k>1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
}