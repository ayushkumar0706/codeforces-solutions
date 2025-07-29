#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--){
long long n, x;
cin>>n>>x;
long long arr[n];
for(int i=0; i<n; i++)
cin>>arr[i];

long long mini = 0, maxi = 0;
for(int i=0; i<n; i++){
    maxi += (arr[i]/x + (arr[i]%x != 0));
}

long long sum = 0;
for(int i=0; i<n; i++){
    sum += arr[i];
}

mini = (sum/x + (sum%x != 0));

cout<<mini<<" "<<maxi<<endl;
}
}