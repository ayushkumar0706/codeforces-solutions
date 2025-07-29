#include<bits/stdc++.h>
using namespace std;

bool solve(long long num){
    if(num == 1)
    return 1;

    long long n = num;
    while(n){
        if(n%10){
        if(num%(n%10)){
            return false;
        }
        }

        n /= 10;
    }

    return 1;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;

while(1>0){
    if(solve(n))
    break;
    n++;
}

cout<<n<<endl;
}
}