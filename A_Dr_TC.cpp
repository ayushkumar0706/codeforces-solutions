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

    int ans = 0, i=0;
    for(auto it: s){
        if(it == '1')
        ans++;
    }

    int cnt = 0;

    while(i<n){
        if(s[i] == '0'){
            cnt += (ans+1);
        }
        else cnt += (ans-1);
        i++;
    }

    cout<<cnt<<endl;

}
}