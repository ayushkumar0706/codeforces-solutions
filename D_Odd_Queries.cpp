#include<bits/stdc++.h>
using namespace std;

int main()
{
long long t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;

long long arr[n];
for(long long i=0;i<n;i++){
cin>>arr[i];
}

long long mat[m][3];
for(long long i=0;i<m;i++){
    for(long long j=0;j<3;j++)
    cin>>mat[i][j];
}

vector<long long>prefix(n);
long long Total_sum=0,sum=0;
for(int i=0;i<n;i++){
    sum+=arr[i];
    prefix[i]=sum;
}

Total_sum=prefix[n-1];

for(long long i=0;i<m;i++){
    if(mat[i][0]!=1)
    sum=prefix[mat[i][1]-1]-prefix[mat[i][0]-2];
    else
    sum=prefix[mat[i][1]-1];

    if((Total_sum-sum+(mat[i][1]-mat[i][0]+1)*mat[i][2])%2!=0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
}
}