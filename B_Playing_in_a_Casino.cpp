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
int n, m;
cin>>n>>m;
vector<vector<int>> arr(n, vector<int>(m));
for(int i=0;i<n;i++){
    for(int j=0; j<m; j++){
    cin >> arr[i][j];
    }
}

int ans = 0, cnt = n/2;
for(int j=0; j<m; j++){
    vector<int>temp;
    for(int i=0; i<n; i++){
        temp.push_back(arr[i][j]);
    }

    sort(temp.begin(), temp.end());
    for(int k=0; k<n; k++){
        if(n%2 != 0 && k == cnt)
        continue;

        if(k < cnt){
            ans -= (((n-1) - (2*k)) *1ll* temp[k]);
        }
        else{
            ans += (((2*k) - (n-1)) *1ll* temp[k]);
        }
    }
}

cout<<ans<<endl;
    
}
}