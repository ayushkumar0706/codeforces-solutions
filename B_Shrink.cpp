#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
    
vector<int>ans(n,0);

int k = n-1, cnt=1;
for(int i=0;i<n/2;i++){
    ans[k] = cnt;
    cnt++;
    k=i;
    ans[k] = cnt;
    cnt++;
    k=n-2-i;
}
if(n%2!=0){
    ans[n/2]=n;
}

for(int i=0;i<n;i++)
cout<<ans[i]<<" ";

cout<<endl;
}
}