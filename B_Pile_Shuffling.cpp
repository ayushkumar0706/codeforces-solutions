#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<vector<long long>>arr(n, vector<long long>(4));
for(int i=0; i<n; i++){
    cin>>arr[i][0]>>arr[i][1]>>arr[i][2]>>arr[i][3];
}

long long ans = 0;
for(int i=0; i<n; i++){
    if(arr[i][0]>arr[i][2]){
        ans+=(arr[i][0]-arr[i][2]);
        arr[i][0]=arr[i][2];
    }
    if(arr[i][1]>arr[i][3]){
        ans+=arr[i][0];
        ans+=(arr[i][1]-arr[i][3]);
    }
}

cout<<ans<<endl;
}
}