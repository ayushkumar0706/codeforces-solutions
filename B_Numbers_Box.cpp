#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n, m;
cin>>n>>m;

vector<vector<int>> arr(n, vector<int>(m));
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>arr[i][j];
    }
}

int ans = 0, neg = 0, mini = INT_MAX;
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        ans += abs(arr[i][j]);
        if(arr[i][j] < 0)
        neg++;

        mini = min(mini, abs(arr[i][j]));
    }
}

if(neg % 2 != 0){
    ans -= 2 * mini;
}

cout<<ans<<endl;
}
}