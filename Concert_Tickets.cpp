#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, m;
cin>>n>>m;
vector<int>arr(n), brr(m);
multiset<int>mt;
for(int i=0;i<n;i++){
cin>>arr[i];
mt.insert(arr[i]);
}
for(int i=0;i<m;i++){
cin>>brr[i];
}

int j = 0;
while(j < m){
    if((mt.empty()) || (*mt.begin() > brr[j])){
        cout<<"-1"<<endl;
        j++;
        continue;
    }

    auto it = mt.lower_bound(brr[j]);
    if((it == mt.end()) || (*it != brr[j])){
        it--;
        cout<<*it<<endl;
        mt.erase(it);
        j++;
    }
    else{
        cout<<*it<<endl;
        mt.erase(it);
        j++;
    }

}

}