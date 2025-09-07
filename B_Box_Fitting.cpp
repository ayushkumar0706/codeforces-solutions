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
int n, w;
cin>>n>>w;
vector<int>arr(n);
for(int i=0; i<n; i++){
cin>>arr[i];
}

int ans = 1, m = n;
sort(arr.begin(), arr.end());
while(m){
    int x = w;
    while(x && m){
        int idx = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
        if(idx == m){
            x -= arr[m-1];
            arr.erase(arr.begin() + (m-1));
            m--;
        }
        else{
            if(arr[idx] == x){
                x -= arr[idx];
                arr.erase(arr.begin() + idx);
                m--;
                if(m > 0)
                ans++;
            }
            else{
                if(idx != 0){
                    x -= arr[idx-1];
                    arr.erase(arr.begin() + (idx-1));
                    m--;
                }
                else{
                    ans++;
                    break;
                }
            }
        }
    }
}

cout<<ans<<endl;
    
}
}