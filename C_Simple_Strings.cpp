#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
string s;
cin>>s;

int n = s.size();
for(int i=1; i<n; i++){
    if(s[i] == s[i-1]){
        if(i != n-1){
            if(s[i+1] != ('a' + (s[i] - 'a' + 1)%26))
            s[i] = 'a' + (s[i] - 'a' + 1)%26;
            else
            s[i] = 'a' + (s[i] - 'a' + 2)%26;
        }
        else{
            s[i] = 'a' + (s[i] - 'a' + 1)%26;
        }
    }
}

cout<<s<<endl;

}