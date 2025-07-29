#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;

vector<long long>arr(n);
for(int i=0;i<n;i++)
cin>>arr[i];

long long maxi=*max_element(arr.begin(),arr.end());
long long mini=*min_element(arr.begin(),arr.end());


    
}
}