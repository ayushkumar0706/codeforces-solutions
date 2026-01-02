#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int x, n;
cin>>x>>n;
vector<int>arr(n);
multiset<int>length;
set<int>pos;
pos.insert(0);
pos.insert(x);
length.insert(x);

for(int i=0; i<n; i++){
cin>>arr[i];

auto it = pos.lower_bound(arr[i]);
int right = *it;
int left = *prev(it);

auto len = length.find(right - left);;
length.erase(len);

length.insert(arr[i] - left);
length.insert(right - arr[i]);

pos.insert(arr[i]);

cout<<*length.rbegin()<<" ";

}

cout<<endl;

}