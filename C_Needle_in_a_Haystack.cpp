#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int test;
cin>>test;
while(test--){
string s, t;
cin>>s>>t;

int n = t.size();
int m = s.size();

map<char, int>mp;
for(auto it: t){
    mp[it]++;
}

int cnt = 0;
for(auto it: s){
    if(mp.find(it) == mp.end()){
        cout<<"Impossible"<<endl;
        cnt = 1;
        break;
    }
    mp[it]--;
    if(mp[it] <= 0){
        mp.erase(it);
    }
}

if(cnt)
continue;

int idx = 0;
vector<char>ans(n);
for(int i=0; i<n; i++){
    for(int j=0; j<26; j++){
        char c = 'a' + j;
        if((idx < m) && (c == s[idx])){
            ans[i] = c;
            idx++;
            break;
        }
        else if(mp.find(c) != mp.end()){
            ans[i] = c;
            mp[c]--;
            if(mp[c] <= 0){
                mp.erase(c);
            }
            break;
        }
    }
}

for(auto it: ans){
    cout<<it;
}

cout<<endl;
    
}
}