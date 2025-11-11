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

int cnt = 0;
sort(arr.begin(), arr.end());
for(int i=1; i<n; i+=2){
    if((i < n-1) && (arr[i] != arr[i+1])){
        cnt = 1;
        break;
    }
}

if(cnt)
cout<<"NO"<<endl;
else
cout<<"YES"<<endl;

}
}