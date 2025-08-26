#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
long long t;
cin>>t;
while(t--){
string s;
cin>>s;
long long n = s.size(), ans = 0;
s += s;

long long cnt = 0;
for(int i=0; i<2*n; i++){
    if(s[i] == '1'){
        cnt++;
        if(cnt > n)
        cnt = n;
        ans = max(ans, cnt);
    }
    else cnt = 0;
}

if(ans == n)
cout<<ans*ans<<endl;
else
cout<<((ans/2)+1) * ((ans/2)+(ans%2))<<endl;

}
}