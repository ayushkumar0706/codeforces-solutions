#include<bits/stdc++.h>
using namespace std;

bool isPowerofTwo(long x){
    return (x > 0) && ((x & (x - 1)) == 0);
}

int main()
{
int t;
cin>>t;
while(t--){
long x;
cin>>x;

if(x==2||x==3||x==4){
    cout<<"-1"<<endl;
    continue;
}


if(isPowerofTwo(x) || isPowerofTwo(x+1)){
    cout<<"-1"<<endl;
    continue;
}

long p=1;
while((p*2)<x){
    p*=2; 
}


long y = p-1;

long Xor=x ^ y;

if (min(x, y) + Xor > max(x, y)) {
    cout<<p-1<<endl;
} else {
    cout <<"-1"<<endl;
}
}
}