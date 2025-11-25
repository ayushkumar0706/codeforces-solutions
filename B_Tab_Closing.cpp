#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--){
double a, b, n;
cin>>a>>b>>n;

double mini1 = a/n;
if((n == 1) || ((a<=b) && (mini1<=b)) || ((a>=b) && (mini1>=b))){
    cout<<"1"<<endl;
}
else{
    cout<<"2"<<endl;
}

}
}