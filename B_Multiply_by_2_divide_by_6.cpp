#include<bits/stdc++.h>
using namespace std;

int main()
{
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;

if(n == 1){
    cout<<"0 "<<endl;
    continue; 
}

if(n%3 != 0){
    cout<<"-1"<<endl;
    continue;
}

int ans = 0;
long long mul2 = 0;
long long num = n;
while(num%2 == 0){
    num /= 2;
    mul2++;
}

long long mul3 = 0;
while(num%3 == 0){
    num /= 3;
    mul3++;
}

if(num != 1 || mul3<mul2){
    cout<<"-1"<<endl;
    continue;
}

ans += (mul3 - mul2);
ans += (mul3);
cout<<ans<<endl;


}
}