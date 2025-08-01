#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<pair<int, int>>arr(n);
for(int i=0; i<n; i++){
    cin>>arr[i].first;
    cin>>arr[i].second;
}

unordered_map<int, int>mp;
for(int i=0; i<n; i++){
    if(mp.find(arr[i].first) != mp.end()){
        if(arr[i].second > arr[mp[arr[i].first]].second)
        mp[arr[i].first] = i;
    }
    else
    mp[arr[i].first] = i;
}

cout<<mp.size()<<endl;
vector<int>ans;
for(auto it: mp){
    ans.push_back(it.second + 1);
}

sort(ans.begin(), ans.end());
for(auto it: ans)
cout<<it<<" ";

cout<<endl;

}
}