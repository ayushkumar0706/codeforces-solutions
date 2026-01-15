#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, k;
cin>>n>>k;
vector<int>arr(k);
for(int i=0;i<k;i++){
cin>>arr[i];
}

int ans = 0;
for(int mask=1; mask<(1<<k); mask++){
    int prod = 1, bits = 0, ok = 1;
    for(int i=0; i<k; i++){
        if(mask & (1<<i)){
            if(prod > (n/arr[i])){
                ok = 0;
                break;
            }
            prod = prod *1ll* arr[i];
            bits++;

        }
    }
    if(!ok)
    continue;

    if(prod <= n){
        int cnt = n/prod;
        if(bits%2)
        ans += cnt;
        else ans -= cnt;
    }
}

cout<<ans<<endl;


}