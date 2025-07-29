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
sort(s.rbegin(), s.rend());

for(int i=0; i<n; i++)
cout<<s[i];
cout<<endl;
    
}
}