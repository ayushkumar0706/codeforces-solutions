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
string s;
cin>>s;

int cnt0 = 0;
for(auto it: s){
    if(it == '0')
    cnt0++;
}

if(cnt0 == 0){
    cout<<"DRAW"<<endl;
}
else{
    if(n%2 != 0 && s[n/2] == '0' && cnt0>=3){
        cout<<"ALICE"<<endl;
    }
    else{
        cout<<"BOB"<<endl;
    }
}

}
}