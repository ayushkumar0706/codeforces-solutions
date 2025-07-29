#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
string s,t;
cin>> s >> t;

if(s == t){
    cout<<"YES"<<endl;
    continue;
}

unordered_map<int,int>mp;
for(auto it:t)
mp[it]++;
int n = s.size(),cnt=0;
int first = n-1, second = t.size()-1;

while(first>=0 && second>=0){
    if(s[first] == t[second]){
        mp[t[second]]--;
        first--;second--;
    }
    else{
        if(mp[s[first]]>0){
            cnt=1;
            break;
        }
        s.erase(first,1);
        first--;
    }
}

if(cnt==1)
cout<<"NO"<<endl;
else{
if(s.find(t)!=string::npos)    
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}

}
}