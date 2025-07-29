#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
char go;
cin>>go;

string s;
cin>>s;

if(go =='g'){
    cout<<"0"<<endl;
    continue;
}

long long idx = -1, ans = 0;
long long idx1 = -1;
for(int i=0; i<n; i++){
    if(idx == -1 && s[i] == 'g')
    idx = i;

    if(idx1 == -1 && s[i] == go)
    idx1 = i;
    else if(idx1 != -1 && s[i] == 'g'){
        ans = max(ans, i - idx1);
        idx1 = -1;
    }
}

if(idx1 != -1 && idx != -1){
    ans = max(ans, (n + idx - idx1));
}

cout<<ans<<endl;
    
}
}