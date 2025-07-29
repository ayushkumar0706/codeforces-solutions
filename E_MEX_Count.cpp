#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long n;
cin>>n;
vector<long>arr(n);
unordered_map<int, int>mp;
for(int i=0;i<n;i++){
    cin>>arr[i];
    mp[arr[i]]++;
}

long extra = 0;
for(auto it: mp){
    extra += (it.second);
}

vector<long>ans(n+1, 1);
vector<long>value(n, 0);

for(int i=0; i<n; i++){
    if(arr[i] < n)
    value[arr[i]]++;
}

for(int i=1; i<n; i++){
    long cnt = 0;
    for(int j=0; j<n; j++){
        if(value[j] == 0){
            if(extra - i >= j)
            cnt++;
            break;
        }

        if(value[j] <= i){
            if(extra - i >= j)
            cnt++;
            else break;
        }
    }

    ans[i] = cnt;
}

for(int i=0; i<=n; i++){
    cout<<ans[i]<<" ";
}

cout<<endl;
}
}