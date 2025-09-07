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
int sum = 0;
for(int i=0;i<n;i++){
cin>>arr[i];
sum += arr[i];
}

int total = 0, check = 1;
for(int i=0; i<n; i++){
    total += arr[i];
    if(total <= 0){
        check = 0;
        break;
    }
    if(i != n-1 && total >= sum){
        check = 0;
        break;
    }
}

if(check){
    cout<<"YES"<<endl;
}
else cout<<"NO"<<endl;
    
}
}