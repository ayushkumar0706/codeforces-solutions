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
vector<vector<int>>arr(n, vector<int>(n, 0));
int cnt = 1;
for(int i=0;i<n;i++){
    for(int j=0; j<n; j++){
        arr[i][j] = cnt;
        cnt++;
    }
}

int ans = 0;
int x[4] = {0, 0, 1, -1};
int y[4] = {1, -1, 0, 0};
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        int cnt = arr[i][j];
        for(int k=0; k<4; k++){
            if(((i+x[k]) >=0) && ((i+x[k]) < n) && ((j+y[k]) >=0) && ((j+y[k]) <n))
            cnt += (arr[i+x[k]][j+y[k]]);
        }
        ans = max(ans, cnt);
    }
}

cout<<ans<<endl;

}
}