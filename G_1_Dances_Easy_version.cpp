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
int n,m;
cin>>n>>m;
vector<int>arr(n), brr(n);
arr[0] = 1;
for(int i=1;i<n;i++){
cin>>arr[i];
}

int ans = 0;
for(int i=0;i<n;i++){
cin>>brr[i];
if(arr[i] >= brr[i])
ans = 1;
}

if(ans == 0){
    cout<<"0"<<endl;
    continue;
}

ans = 0;

sort(arr.begin(), arr.end());
sort(brr.begin(), brr.end());

int i=0, j=0;
while(i < n && j < n){
    if(arr[i] < brr[j]){
        i++; j++;
    }
    else j++;
}

ans += (n-i);
cout<<ans<<endl;

}
}