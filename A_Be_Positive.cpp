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
vector<int>arr(n);
int cnt = 0, neg = 0;
for(int i=0;i<n;i++){
cin>>arr[i];
if(arr[i] == 0)
cnt++;
else if(arr[i] == -1)
neg++;
}

cout<<cnt + 2*((neg%2) != 0)<<endl;
    
}
}