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

int cnt = 0;
n--;
for(int i=2; i*i<=n; i++){
    if((n%i) == 0){
        int num = n;
        while(!(num%i) && num){
            num /= i;
            num--;
        }
        if(!num){
            cnt = 1;
            break;
        }    
    }
}

if(cnt)
cout<<"YES"<<endl;
else cout<<"NO"<<endl;

}
}