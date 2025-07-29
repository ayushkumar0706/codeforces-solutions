#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

int ans = INT_MIN, cnt = -1;
int sum = 0;
for(int i=0; i<n; i++){
    sum += arr[i];
    if(sum >= 0 && (abs(arr[i])%2 == cnt || cnt == -1)){
        cnt = (abs(arr[i])%2 + 1)%2;
        ans = max(ans, sum);
    }
    else{
        if(arr[i] < 0){
            ans = max(ans, sum);
            sum = 0;
            cnt = -1;
        }
        else{
            sum = arr[i];
            cnt = (abs(arr[i])%2 + 1)%2;
            ans = max(ans, sum);
        }
    }
}

cout<<ans<<endl;
}
}