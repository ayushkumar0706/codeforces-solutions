#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long long n, k;
cin>>n>>k;

long long arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];

set<pair<long long, long long>>st;

long long ans = 0;
for(int i=0; i<n; i++){
    ans += __builtin_popcount(arr[i]);

    long long j = 0;
    while(((1ll<<j) & arr[i])){
        j++;
    }

    st.insert({1ll<<j, i});
}

while(k){
    auto it = st.begin();
    
    if(it->first <= k){
        k -= (it->first);
        arr[it->second] |= (it->first);

        long long idx = it->second;
        st.erase(it);
        ans++;

        long long j = 0;
        while((1ll<<j) & arr[idx]){
            j++;
        }
        st.insert({1ll<<j ,idx});
    }
    else
    break;
}

cout<<ans<<endl;
    
}
}