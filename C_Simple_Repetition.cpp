#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;

if(n==1 && k==1){
    cout<<"NO"<<endl;
    continue;
}

if(n==1 && k==2){
    cout<<"YES"<<endl;
    continue;
}

if(k==1){
    if (n <= 3){
        cout<<"YES"<<endl;
        continue;
    }

    if (n % 2 == 0 || n % 3 == 0) {
        cout<<"NO"<<endl;
        continue;
    }

    int cnt=0;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0){
            cnt=1;
            break;
        }
    }
    if(cnt==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
        
}
else{
    cout<<"NO"<<endl;
}
    
}
}