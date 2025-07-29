#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long t;
cin>>t;
while(t--){
long long a, b;
cin>>a>>b;

long long ans = INT_MAX;
for(int addition = 0; addition < 32; addition++){
    long long new_b = b + addition;
    if(new_b == 1)
    continue;

    long long operation = addition;
    long long new_a = a;
    while(new_a){
        new_a /= new_b;
        operation++;
    }

    ans = min(ans,operation);
}

cout<<ans<<endl;
    
}
}