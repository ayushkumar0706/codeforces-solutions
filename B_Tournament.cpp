#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n, j, k;
cin>>n>>j>>k;

vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

int strength = arr[j-1];
int maxi = *max_element(arr.begin(), arr.end());

if(k==1 && strength < maxi)
cout<<"No"<<endl;
else
cout<<"Yes"<<endl;
}
}