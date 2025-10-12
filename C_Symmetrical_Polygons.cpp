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
vector<int>arr(n);
map<int, int>mp;
for(int i=0;i<n;i++){
cin>>arr[i];
mp[arr[i]]++;
}

vector<int>ans;
int sum = 0, cnt = 0;
for(auto it: mp){
    if((it.second%2) != 0){
        ans.push_back(it.first);
        sum += (it.first * (it.second-1));
        cnt += (it.second-1);
    }
    else{
        sum += (it.first * (it.second));
        cnt += it.second;
    }
}

if(sum == 0){
    cout<<sum<<endl;
    continue;
}

sort(ans.begin(), ans.end(), greater<int>());
int m = ans.size();
int sum1 = 0;
for(int i=0; i<m; i++){
    if(ans[i] < sum){
        sum1 = sum+ans[i];
    }
}

for(int i=0; i<m-1; i++){ 
    if((ans[i]-ans[i+1]) < sum){
        sum1 = sum + ans[i] + ans[i+1];
        break;
    }
}

if(cnt >= 4){
    sum1 = max(sum1, sum);
}

cout<<sum1<<endl;

}
}