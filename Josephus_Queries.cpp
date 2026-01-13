#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int josh(int n, int k){
    if(n == 1) return 1;
    int half = (n+1)/2;

    if(k <= half){
        if(n < (2*k))
        return (2*k)%n;
        return 2*k;
    }
    
    int temp = josh(n/2, k-half);
    if(n%2)
    return 2*temp + 1;
    return 2*temp - 1;
}

signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--){
int n, k;
cin>>n>>k;

int ans = josh(n, k);
cout<<ans<<endl;
    
}
}