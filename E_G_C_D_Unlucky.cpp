#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<long long>arr(n), brr(n), v(n), pre(n), suf(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

for(int i=0;i<n;i++){
cin>>brr[i];
}

for(int i=0; i<n; i++){
    v[i] = (arr[i]/gcd(arr[i], brr[i])) *1ll* brr[i];
}

long long g = v[0];
pre[0] = g;
for(int i=1; i<n; i++){
    pre[i] = gcd(g,v[i]);
    g = pre[i];
}

g = v[n-1];
suf[n-1] = g;
for(int i=n-2; i>=0; i--){
    suf[i] = gcd(g, v[i]);
    g = suf[i];
}

int cnt = 0;
for(int i=0; i<n; i++){
    if(pre[i]!=arr[i]){
        cnt = 1;
        break;
    }
}

for(int i=0; i<n; i++){
    if(suf[i]!=brr[i]){
        cnt = 1;
        break;
    }
}

if(cnt == 0)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;

}
}