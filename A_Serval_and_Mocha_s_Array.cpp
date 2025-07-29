#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a==0)
    return b;

    gcd(b%a,a);
}
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
cin>>arr[i];
}

int cnt=0;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(gcd(arr[i],arr[j])<3){
            cnt=1;
            break;
        }
    }
    if(cnt==1)
    break;
}

if(cnt==1)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;

}
}