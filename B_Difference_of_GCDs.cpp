#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
long long t;
cin>>t;
while(t--){
long long n, l, r;
cin>>n>>l>>r;

int cnt = 1;
vector<long>ans(n);
for(int i=1; i<=n; i++){
    long mul = l/i;
    if(l%i)
    mul++;
    if(mul*i > r){
        cnt = 0;
        break;
    }
    else ans[i-1] = (mul*i);
}

if(cnt){
    cout<<"YES"<<endl;
    for(int i=0; i<n; i++)
    cout<<ans[i]<<" ";
}
else cout<<"NO";
cout<<endl;
    
}
}