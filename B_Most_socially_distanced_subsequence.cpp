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
vector<int>arr(n), ans;
for(int i=0;i<n;i++){
cin>>arr[i];
}

int i = 1;
ans.push_back(arr[0]);
while(i < n-1){
    if(arr[i-1] < arr[i] && arr[i] < arr[i+1]){
        i++;
        continue;
    }
    if(arr[i-1] > arr[i] && arr[i] > arr[i+1]){
        i++;
        continue;
    }
    ans.push_back(arr[i]);
    i++;
}

ans.push_back(arr[i]);

cout<<ans.size()<<endl;
for(auto it: ans)
cout<<it<<" ";
cout<<endl;
    
}
}