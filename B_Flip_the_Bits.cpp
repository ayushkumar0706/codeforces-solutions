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

string a;
cin>>a;
string b;
cin>>b;

vector<bool>prefix(n, 0);
int cnt = 0, cnt1 = 0;
for(int i=0; i<n; i++){
    if(a[i] == '0')
    cnt++;
    else cnt1++;
    if(cnt == cnt1)
    prefix[i] = 1;
}

int rev = 0, check = 1;
for(int i=n-1; i>=0; i--){
    if(((rev + (a[i] - '0')) % 2) != (b[i] - '0')){
        if(prefix[i] == 1){
            rev = (rev + 1)%2;
        }
        else{
            check = 0;
            break;
        }
    }
}

if(check)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
    
}
}