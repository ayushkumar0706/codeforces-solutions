#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

map<int,int>mp;
for(auto it: arr)
mp[it]++;

int cnt = 0;
for(auto it: mp)
if(it.second > 1){
    cnt = 1;
    break;
}

if(cnt)
cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
}