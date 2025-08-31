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
vector<int>arr(n), brr(n);
for(int i=0;i<n;i++){
cin>>brr[i];
}
for(int i=0;i<n;i++){
cin>>arr[i];
arr[i] -= brr[i];
}

int ans = 0;
sort(arr.begin(), arr.end());
int i = 0, j = n-1;

while(i < j){
    if((arr[i] + arr[j]) >= 0){
        ans++;
        i++;
        j--;
    }
    else{
        i++;
    }
}

cout<<ans<<endl;

    
}
}