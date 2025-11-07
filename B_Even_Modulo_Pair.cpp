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
for(int i=0;i<n;i++){
cin>>arr[i];
}

int ans = -1;
for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
        if(((arr[j]%arr[i])%2) == 0){
            cout<<arr[i]<<" "<<arr[j]<<endl;
            ans = 1;
            break;
        }
    }
    if(ans == 1)
    break;
}

if(ans == -1)
cout<<ans<<endl;

}
}