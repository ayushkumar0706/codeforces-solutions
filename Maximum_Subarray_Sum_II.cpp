#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, a, b;
cin>>n>>a>>b;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

int ans = LLONG_MIN;
vector<int>pre(n);
pre[0] = arr[0];

for(int i=1; i<n; i++){
    pre[i] = pre[i-1] + arr[i];
}

multiset<int>mt;
int k = a - 1;
int i = k - b;
int j = k - a;

mt.insert(0);
while(k < n){
    ans = max(ans, pre[k] - *mt.begin());
    if(i == -1)
    mt.erase(mt.find(0));
    if(i >= 0){
        mt.erase(mt.find(pre[i]));
    }
    i++; j++;
    k++;
    mt.insert(pre[j]);
}

cout<<ans<<endl;

}