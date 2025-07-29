#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
string s;
cin>>s;

int ans = 0, open = 0, close = 0;
for(int i=0; i<n; i++){
    if(s[i] == '(')
    open++;
    else close++;

    if(close > open){
        ans++;
        close--;
    }
}

cout<<ans<<endl;
}
}