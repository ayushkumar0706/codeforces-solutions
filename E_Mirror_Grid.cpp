#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<vector<char>>mat(n, vector<char>(n));
for(int i=0;i<n;i++){
for(int j=0; j<n; j++)
cin>>mat[i][j];
}

int ans = 0;
for(int i=0; i<(n+1)/2; i++){
    for(int j=0; j<n/2; j++){
        int row = i, col = j;
        int cnt = 0;
        if(mat[row][col] == '0') cnt++;
        if(mat[col][n-1-row] == '0') cnt++;

        row = n-1-i, col = n-1-j;
        if(mat[row][col] == '0') cnt++;
        if(mat[col][n-1-row] == '0') cnt++;

        ans += min(cnt, (4-cnt));
    }
}

cout<<ans<<endl;
    
}
}