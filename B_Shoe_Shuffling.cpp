#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<long>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

vector<int>ans(n,0);
for(int i=0; i<n; i++){
    ans[i] = i+1;
}

for(int i=0; i<n-1; i++){
    if(arr[i] == arr[i+1]){
        swap(ans[i], ans[i+1]);
    }
}

int cnt = 0;
for(int i=0; i<n; i++){
    if(ans[i] == i+1){
        cnt = 1;
        break;
    }
}

if(cnt == 1){
    cout<<"-1"<<endl;
    continue;
}

for(int i=0; i<n; i++)
cout<<ans[i]<<" ";
cout<<endl;
}
}