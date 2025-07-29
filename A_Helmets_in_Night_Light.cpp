#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long long n, p;
cin>>n>>p;
vector<pair<long long, long long>>arr(n);

for(int i=0;i<n;i++){
cin>>arr[i].second;
}

for(int i=0;i<n;i++){
cin>>arr[i].first;
}

sort(arr.begin(), arr.end());

long long cnt = 1, ans = p;
for(auto it: arr){
    if(cnt == n)
    break;

    if(it.first < p){
        long long sum = 0;
        if((n - cnt) >= it.second){
            sum = (it.first) * (it.second);
            ans += sum;
            cnt += (it.second);
        }
        else{
            sum = (it.first * (n - cnt));
            ans += sum;
            cnt = n;
        }
    }
    else{
        long long  add = (n - cnt)*p;
        ans += add;
        cnt = n;
        break;
    }
}

if(cnt < n){
    long long add = (n - cnt)*p;
    ans += add;
}

cout<<ans<<endl;
}
}