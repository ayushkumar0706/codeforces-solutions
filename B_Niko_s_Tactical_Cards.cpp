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
cin>>arr[i];
}

for(int i=0;i<n;i++){
cin>>brr[i];
}

int minOld = 0, maxOld = 0;
for(int i=0; i<n; i++){
    int cnt1 = min(minOld - arr[i], brr[i] - maxOld);
    int cnt2 = max(maxOld - arr[i], brr[i] - minOld);
    minOld = cnt1;
    maxOld = cnt2;
}

cout<<maxOld<<endl;

}
}