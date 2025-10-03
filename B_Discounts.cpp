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
vector<int>arr(n), brr(m);
int sum = 0;
for(int i=0;i<n;i++){
cin>>arr[i];
sum += arr[i];
}
for(int i=0;i<m;i++){
cin>>brr[i];
}

sort(brr.begin(), brr.end());
sort(arr.begin(), arr.end(), greater<int>());

int j = 0;
for(int i=0; i<n; i++){
    if(brr[j] > n-i || j >= m){
        break;
    }

    sum -= (arr[i + brr[j] - 1]);
    i += (brr[j] - 1);
    j++;
}

cout<<sum<<endl;
    
}
}