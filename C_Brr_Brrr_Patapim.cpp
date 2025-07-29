#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;

int arr[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
}

vector<int>ans(2*n,0);

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        ans[i+j+1] = arr[i][j];
    }
}

int a = 0;
for(auto it: ans){
    a+=it;
}

cout<<(((2*n)*((2*n)+1))/2)-a<<" ";
for(int i=1;i<2*n;i++){
    cout<<ans[i]<<" ";
}
cout<<endl;
    
}
}