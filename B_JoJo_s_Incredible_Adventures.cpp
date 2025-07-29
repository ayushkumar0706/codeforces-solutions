#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long t;
cin>>t;
while(t--){
string s;
cin>>s;

int n = s.size();
int len = 0, cnt = 0;
int st = 0, end = 0;

for(int i=0; i<n; i++){
    if(st == i && s[i]=='1')
    st++;
    if(s[i] == '1'){
        cnt++;
        len = max(len, cnt);
    }
    else cnt = 0;
}

if(len == n){
    cout<<len *1ll* len<<endl;
    continue;
}

long long ans1 = ((len/2)+(len%2)) * ((len/2)+1);
for(int i=n-1; i>=0; i--){
    if(s[i]=='1')
    end++;
    else break;
}

long long ans2 = 0;
if(st!=0 && end!=0){
if(end >= (st+end)/2){
    long long m = st+end;
    ans2 = ((m/2)+(m%2)) * ((m/2)+1);
}
else{
    ans2 = (end-1) * (st+1);
}
}

cout<<max(ans1, ans2)<<endl;

}
}