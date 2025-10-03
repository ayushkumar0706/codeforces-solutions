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
vector<pair<int, int>>arr;
map<int, int>mp;
for(int i=0;i<n;i++){
int x;
cin>>x;
mp[x]++;
}

for(auto it: mp){
    arr.push_back({it.second, it.first});
}

sort(arr.rbegin(), arr.rend());
int a = 0, b = 0;
bool turn = 0;
int m = arr.size();
for(int i=0; i<m; i++){
    int freq = arr[i].first;
    int el = arr[i].second;
    if(turn == 0){
        a += ((el+1)/2)*freq;
        b += (el/2)*freq;
        turn = (el%2);
    }
    else{
        b += ((el+1)/2)*freq;
        a += (el/2)*freq;
        turn = (el%2) == 0;
    }

}

cout<<a<<" "<<b<<endl;
    
}
}