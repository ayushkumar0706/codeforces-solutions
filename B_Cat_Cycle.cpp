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
int n, k;
cin>>n>>k;

if((n%2) == 0){
    if((k%n) == 0)
    cout<<n<<endl;
    else
    cout<<k%n<<endl;
}
else{
    int cross = (n+1)/2;
    int hr = cross - 1;

    if(k < cross)
    cout<<k<<endl;
    else{
        int add = (k-cross)/hr;
        k++;
        k = k%n;
        if( k == 0)
        k = n;
        k += add;
        k = k%n;
        if( k == 0)
        k = n;
        cout<<k<<endl;
    }
}
    
}
}