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
char c;
cin>>c;
string s;
cin>>s;

int cnt = 1;
for(int i=0; i<n; i++){
    if(s[i] != c){
        cnt = 0;
        break;
    }
}

if(cnt){
    cout<<"0"<<endl;
    continue;
}

int ans = -1;
for(int i=1; i<n; i++){
    bool check = 1;
    int mul = i+1, idx = i;
    while(idx < n){
        if(s[idx] != c){
            check = 0;
            break;
        }
        idx += mul;
    }

    if(check){
        ans = i+1;
        break;
    }
}

if(ans != -1){
    cout<<"1"<<endl;
    cout<<ans<<endl;
    continue;
}

cout<<"2"<<endl;
cout<<n-1<<" ";
cout<<n<<" "<<endl;


}
}