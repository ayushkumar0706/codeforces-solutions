#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n, k;
cin>>n>>k;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

int ans = 0, cnt = 0;
for(int i=0; i<n; i++){
    if(arr[i] == 0)
    cnt++;
    else cnt = 0;

    if(cnt == k){
        ans++;
        cnt = 0;
        i++;
    }
}

cout<<ans<<endl;

}
}