#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--){
long long x, y;
cin>>x>>y;

vector<vector<long long>>arr(4);
for(long long i=0; i<4; i++){
    long long k;
    cin>>k;
    arr[i].push_back(k);
    for(long long j=1; j<=arr[i][0]; j++){
        long long el;
        cin>>el;
        arr[i].push_back(el);
    }
}

long long maxi1 = max((arr[0][arr[0][0]] - arr[0][1])*y, (arr[1][arr[1][0]] - arr[1][1])*y);
long long maxi2 = max((arr[2][arr[2][0]] - arr[2][1])*x, (arr[3][arr[3][0]] - arr[3][1])*x);

cout<<max(maxi1, maxi2)<<endl;
    
}
}