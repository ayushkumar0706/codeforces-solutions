#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<pair<int, int>>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i].first;
arr[i].second = i;
}

vector<int>ans(n+1, 0);
sort(arr.rbegin(), arr.rend());

int cnt = 1;
long long result = 0;
for(int i=0; i<n; i++){
    ans[arr[i].second + 1] = cnt;
    result += 2 * (abs(cnt - ans[0])) * 1LL *  arr[i].first;
    i++;
    if(i < n){
        ans[arr[i].second + 1] = -1 * cnt;
        result += 2 * (abs(cnt - ans[0])) * 1LL * arr[i].first;
    }
    cnt++; 
}

cout<<result<<endl;
for(int i=0; i<=n; i++){
    cout<<ans[i]<<" ";
}

cout<<endl;

}
}