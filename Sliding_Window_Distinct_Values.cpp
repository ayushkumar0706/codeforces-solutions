#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, k;
cin>>n>>k;
vector<int>arr(n), ans;
map<int, int>mp;
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int j = -1;
for(int i=0; i<n; i++){
    mp[arr[i]]++;
    if(i >= (k-1)){
        if(j != -1){
            mp[arr[j]]--;
            if(mp[arr[j]] == 0)
            mp.erase(arr[j]);
        }
        j++;
        ans.push_back(mp.size());
    }
}

for(auto it: ans)
cout<<it<<" ";
cout<<endl;

}
