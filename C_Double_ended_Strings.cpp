#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    
long long t;
cin>>t;
while(t--){
string a;
cin>>a;

string b;
cin>>b;

int n = a.size();
int m = b.size();

int ans = n + m;
unordered_set<string>sub;
for(int i=0; i<n; i++){
    for(int j=0; j<n-i; j++){
        string temp = "";
        for(int k=j; k<=j+i; k++){
            temp += a[k];
        }
        sub.insert(temp);
    }
}

for(auto it: sub){
    if(b.find(it) != string::npos){
        ans = min(ans, (int)((n+m) - (2 * it.size())));
    }
}

cout<<ans<<endl;
}
}