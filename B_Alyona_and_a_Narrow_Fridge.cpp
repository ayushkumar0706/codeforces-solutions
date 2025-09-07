#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, h;
cin>>n>>h;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

int ans = 1;
for(int k=1; k<=n; k++){
    vector<int>temp(arr.begin(), arr.begin()+k);
    sort(temp.begin(), temp.begin()+k, greater<int>());

    int cnt = 1, avl = h;
    for(int i=0; i<k; i+=2){
        avl -= temp[i];
        if(avl < 0){
            cnt = 0;
            break;
        }
    }

    if(cnt)
    ans = max(ans, k);
}

cout<<ans<<endl;
    
}