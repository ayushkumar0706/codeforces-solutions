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
vector<int>arr(m), gap;
for(int i=0;i<m;i++){
cin>>arr[i];
}

sort(arr.begin(), arr.end());
gap.push_back((n-1) - (arr[m-1] - arr[0]));
for(int i=1; i<m; i++){
    gap.push_back(arr[i] - arr[i-1] - 1);
}

int cnt = 0, ans = 0;
sort(gap.begin(), gap.end(), greater<int>());
for(int i=0; i<m; i++){
    if(gap[i] <= cnt){
        break;
    }
    else{
        int sum = gap[i] - cnt;
        if(sum > 1)
        sum--;
        ans += sum;
        cnt += 4;
    }
}

cout<<n - ans<<endl;
}
}