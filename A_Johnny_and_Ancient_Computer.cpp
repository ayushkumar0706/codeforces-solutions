#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long t;
cin>>t;
while(t--){
long long a, b;
cin>>a>>b;

if(a == b){
    cout<<"0"<<endl;
    continue;
}

long long num = max(a, b) / min(a, b);
if(max(a, b) % min(a, b) != 0 || num & (num-1)){
    cout<<"-1"<<endl;
    continue;
}

long long ans = 0;
while(num > 1){
    if(num%8 == 0)
    num /= 8;
    else if(num%4 == 0)
    num /= 4;
    else
    num /= 2;

    ans++;
}

cout<<ans<<endl;
    
}
}