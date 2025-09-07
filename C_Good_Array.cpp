#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n;
cin>>n;
vector<int>arr(n), ans;
map<int, int>mp;
int sum = 0;
for(int i=0;i<n;i++){
cin>>arr[i];
sum += arr[i];
mp[arr[i]]++;
}

for(int i=0; i<n; i++){
    int num = sum - arr[i];
    if((num%2 == 0) && (mp.find(num/2) != mp.end())){
        if((num/2) != arr[i] || mp[num/2] > 1)
        ans.push_back(i+1);
    }
}

cout<<ans.size()<<endl;
for(auto it: ans)
cout<<it<<" ";
cout<<endl;

}