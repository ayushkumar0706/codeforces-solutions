#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

long long gcd1 = 0, gcd2 = 0;
for(int i=0; i<n; i++){
    if(i%2 == 0){
        gcd1 = __gcd(gcd1, arr[i]);
    }
    else{
        gcd2 = __gcd(gcd2, arr[i]);
    }
}

long long cnt1 = 0, cnt2 = 0;
for(int i=0; i<n; i++){
    if(i%2 == 0){
        if(arr[i]%gcd2 == 0)
        cnt1 = 1;
    }
    else{
        if(arr[i]%gcd1 == 0)
        cnt2 = 1;
    }
}

if(!cnt1){
    cout<<gcd2;
}
else if(!cnt2){
    cout<<gcd1;
}
else cout<<"0";
cout<<endl;
    
}
}