#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long long a,b,n;
cin>>a>>b>>n;

vector<long long>arr(n,0);
for(int i=0;i<n;i++)
cin>>arr[i];

sort(arr.begin(),arr.end());

long long Time=1;

int i=0;
while(i<n){
    if(b==1){
        b=min(a,b+arr[i]);
        // cout<<"b:"<<b<<" ";
        i++;
    }
    Time+=(b-1);
    // cout<<"Time:"<<Time<<" ";
    b=1;
}

cout<<Time<<endl;
}
}