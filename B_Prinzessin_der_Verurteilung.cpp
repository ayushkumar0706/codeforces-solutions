#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
vector<string>substrings;
for(int i=0; i<26; i++){
    substrings.push_back(string(1, 'a' + i));
}
for(int i=0; i<26; i++){
    for(int j=0; j<26; j++){
        substrings.push_back(string(1, 'a' + i) + string(1, 'a' + j));
    }
}
for(int i=0; i<26; i++){
    for(int j=0; j<26; j++){
        for(int k =0; k<26; k++){
            substrings.push_back(string(1, 'a' + i) + string(1, 'a' + j) + string(1, 'a' + k));
        }
    }
}

ios_base::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--){
int n;
cin>>n;
string s;
cin>>s;

string ans = "";
for(auto it: substrings){
    if(s.find(it) == string::npos){
        ans = it;
        break;
    }
}

cout<<ans<<endl;

}
}