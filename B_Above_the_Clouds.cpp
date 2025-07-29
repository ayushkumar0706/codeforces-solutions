#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
    string s;
    cin>>s;

    map<char,int>mp;

    for(auto it: s){
        mp[it]++;
    }

    int cnt = 0;
    char c;
    if(s[0] == s[n-1])
    c = s[0];
    else
    c = '$';

    for(auto it: mp){
        if(it.second > 1 && it.first != c){
            cnt = 1;
        }
        else if(it.first == c && it.second > 2)
        cnt = 1;
    }

    if(cnt == 1)
    cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
}