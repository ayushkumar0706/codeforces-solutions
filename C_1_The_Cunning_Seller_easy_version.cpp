#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<long long>power;
long long num = 1;
while(num <= 1e9){
    power.push_back(num);
    num *= 3;
}
power.push_back(num);

ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;

long long ans = 0;
while(n >= 3){
    long long i;
    for(i=1; i<power.size(); i++){
        if(power[i] > n)
        break;
    }
    long long sum = (power[i] + ((i - 1) * power[i-2]));
    ans += sum;
    n -= power[i-1];
}
//Ayush

ans += (3*n);
cout<<ans<<endl;

}
}