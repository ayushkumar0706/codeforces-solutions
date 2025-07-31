#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long a,b;
cin>>a>>b;

if(a<b)
cout<<"0"<<endl;
else if (a == b){
    cout<<"infinity"<<endl;
}
else{
    long long n = a - b;
    long long cnt = 0;
    for(int i=1; i*i<=n; i++){
        if(n%i == 0){
            if(i>b)
            cnt++;
            if(i != n/i && (n/i) > b)
            cnt++;
        }
    }

    cout<<cnt<<endl;
}
}