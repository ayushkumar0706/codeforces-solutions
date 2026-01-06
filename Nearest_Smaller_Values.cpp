#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

priority_queue<pair<int, int>>pq;
vector<int>order(n, 0);

pq.push({arr[n-1], n-1});
for(int i=n-2; i>=0; i--){
    while((!pq.empty()) && ((pq.top().first) > arr[i])){
        order[pq.top().second] = i+1;
        pq.pop();
    }

    pq.push({arr[i], i});
}

for(auto it: order)
cout<<it<<" ";
cout<<endl;

}