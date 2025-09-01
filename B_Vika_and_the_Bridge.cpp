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
int n,k;
cin>>n>>k;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

vector<int>last(k+1, -1);
vector<int>maxi(k+1, 0), sec_maxi(k+1, 0);
for(int i=0; i<n; i++){
    if(last[arr[i]] == -1){
        maxi[arr[i]] = i;
        last[arr[i]] = i;
        continue;
    }

    int dist = i - last[arr[i]] - 1;
    if(dist > maxi[arr[i]]){
        sec_maxi[arr[i]] = maxi[arr[i]];
        maxi[arr[i]] = dist;
    }
    else if(dist > sec_maxi[arr[i]]){
        sec_maxi[arr[i]] = dist;
    }

    last[arr[i]] = i;
}

for(int i=1; i<=k; i++){
    int dist = n - last[i] - 1;
    if(dist > maxi[i]){
        sec_maxi[i] = maxi[i];
        maxi[i] = dist;
    }
    else if(dist > sec_maxi[i]){
        sec_maxi[i] = dist;
    }

}

int ans = n/2;
for(int i=1; i<=k; i++){
    ans = min(ans, max((maxi[i]/2), sec_maxi[i]));
}

cout<<ans<<endl;

    
}
}