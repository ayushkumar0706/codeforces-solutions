#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long n, m;
cin>>n>>m;

long long num1 = min(n, m);
long long num2 = max(n, m);

long long ans = 0;
for(long long i=1; i<=num1; i++){
    long long diff = 5 - (i%5);
    long long maxi = num2 - diff;

    if(maxi >= 0)
    ans++;
    ans += (maxi/5);
}

cout<<ans<<endl;

}