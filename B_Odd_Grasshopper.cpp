#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long long x, n;
cin>>x>>n;

if(n == 0){
    cout<<x<<endl;
    continue;
}

long long ans;
long long size = (n-1)/4;
long long sum = 4*size;

if(x%2==0){
    ans = -1;
    ans += (((n-1)%4)*(sum + 1) - sum);
    if((n-1)%4 == 1)
    ans += 1;
    else if((n-1)%4 == 2)
    ans += 3;
    else if((n-1)%4 == 3)
    ans -= 2*(sum + 1);
}
else{
    ans = 1;
    ans += (sum - (((n-1)%4)*(sum + 1)));
    if((n-1)%4 == 1)
    ans -= 1;
    else if((n-1)%4 == 2)
    ans -= 3;
    else if((n-1)%4 == 3)
    ans += 2*(sum + 1);
}

cout<<x + ans<<endl;

}
}