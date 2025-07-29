#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
if(n%2==0){
    cout<<"-1"<<endl;
    continue;
}

int cnt=(n/2)+1;
int sum=cnt;
vector<int>ans;

for(int i=1;i<=n;i++){
    if(cnt==i){
        ans.push_back(cnt);
        sum=1;
    }
    else if((i+sum)%n==0){
        ans.push_back(n);
        sum++;
    }
    else{
        ans.push_back((i+sum)%n);
        sum++;
    }
}

for(auto it:ans)
cout<<it<<" ";
cout<<endl;
}
}