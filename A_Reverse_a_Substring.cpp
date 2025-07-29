#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
string s;
cin>>s;

int i = 1;
for(i=1; i<n; i++){
    if(s[i] < s[i-1]){
       break;
    }
}

if(i < n){
    cout<<"YES"<<endl;
    cout<<i<<" "<<i+1<<endl;;
}
else
cout<<"NO"<<endl;

}
