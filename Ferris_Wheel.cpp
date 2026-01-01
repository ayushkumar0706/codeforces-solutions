#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, k;
cin>>n>>k;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

sort(arr.begin(), arr.end());
int i = 0, j = n - 1;
int ans = 0;
while(i <= j){
    if((arr[i] + arr[j]) <= k){
        i++;
        j--;
    }
    else{
        j--;
    }
    ans++;
}

cout<<ans<<endl;

}