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

if(arr[n-1] < arr[n-2]){
    cout<<"-1"<<endl;
    continue;
}

if((arr[n-1] == (-1e9) && arr[n-2] == (1e9)) || arr[n-1] < 0){
    int cnt = 1;
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            cnt = 0;
            break;
        }
    }

    if(cnt)
    cout<<"0"<<endl;
    else cout<<"-1"<<endl;
    continue;
}

cout<<n-2<<endl;
for(int i=0; i<n-2; i++){
    cout<<i+1<<" "<<n-1<<" "<<n<<endl;
}

}
}