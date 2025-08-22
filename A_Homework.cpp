#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
    string s;
    cin>>s;
    long long m;
    cin>>m;
    string b, c;
    cin>>b;
    cin>>c;

    for(int i=0; i<m; i++){
        if(c[i] == 'D')
        s += b[i];
        else s = b[i] + s;
    }

    cout<<s<<endl;

}
}