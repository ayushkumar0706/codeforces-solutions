#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>arr(n);
map<int, int>mp;
for(int i=0; i<n; i++){
    cin>>arr[i];
    mp[arr[i]]++;
}

map<int, int>freq;
int mex = 0;
for(auto &[x, y] : mp){
    if(x == mex)
    mex++;
    else break;

    freq[y]++;
}

vector<int>ans(n+1, 0);
ans[0] = 1, ans[n] = 1;
for(int i=n-1; i>n - mex; i--){
    ans[i] = ans[i+1] + 1;
}

for(int i=1; i<n; i++){
    if(ans[i]) break;
    ans[i] = ans[i-1] + freq[i];
}

for(int i=0; i<=n; i++){
    cout<<ans[i]<<" ";
}

cout<<endl;
}
}