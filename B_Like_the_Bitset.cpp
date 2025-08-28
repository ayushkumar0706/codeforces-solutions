#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
string s;
cin>>s;

int cnt = 0;
for(int i=0; i<n; i++){
    if(s[i] == '1'){
        cnt++;
    }
    else cnt = 0;

    if(cnt == k)
    break;
}

if(cnt == k){
    cout<<"NO"<<endl;
    continue;
}

cout<<"YES"<<endl;
int num = 1;
vector<int>ans(n);
for(int i=0; i<n; i++){
    if(s[i] == '1'){
        ans[i] = num;
        num++;
    }
}

for(int i=0; i<n; i++){
    if(s[i] == '0'){
        ans[i] = num;
        num++;
    }
}

for(auto it: ans)
cout<<it<<" ";
cout<<endl;
    
}
}