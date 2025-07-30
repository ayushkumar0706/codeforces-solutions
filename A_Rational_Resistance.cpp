#include<bits/stdc++.h>
using namespace std;

long long solve(long long a, long long b){
    if(a == 1)
    return 0;

    return (a/b) + solve(b, (a%b));
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long a, b;
cin>>a>>b;

if(a==1 || b==1){
    cout<<max(a, b)<<endl;
}else
cout<<solve(a, b)<<endl;
}