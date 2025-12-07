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
int n, k;
cin>>n>>k;
vector<int>arr(n);
vector<int> ans;
vector<bool> vist(k+1, 0);
unordered_set<int>st;
for(int i=0;i<n;i++){
cin>>arr[i];
st.insert(arr[i]);
}

int cnt = 0;
sort(arr.begin(), arr.end());
for(int i=0; i<n; i++){
    if(!vist[arr[i]]){
        ans.push_back(arr[i]);
        int num = arr[i], mul = num;
        while(num <= k){
            if((st.find(num) == st.end()) && (num <= k)){
                cnt = 1;
                break;
            }
            vist[num] = true;
            num += mul;
        }
    }

    if(cnt) break;
}

if(cnt){
    cout<<"-1"<<endl;
    continue;
}

cout<<ans.size()<<endl;
for(auto it: ans){
    cout<<it<<" ";
}

cout<<endl;

}
}