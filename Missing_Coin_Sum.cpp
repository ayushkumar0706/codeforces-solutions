#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

int ans = 0;
sort(arr.begin(), arr.end());
for(int i=0; i<n; i++){
    if(arr[i] > (ans+1)){
        break; 
    }
    ans = ans + arr[i];
}

cout<<ans+1<<endl;

}