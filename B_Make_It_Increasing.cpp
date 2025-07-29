#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
long n;
cin>>n;
long arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}

long cnt=0,ans=0;
for(int i=n-2;i>=0;i--){
    if(arr[i]>=arr[i+1]){
        if(arr[i+1]==0){
            cnt=1;
            break;
        }
        while(arr[i]>=arr[i+1]){
            ans++;
            arr[i]=arr[i]>>1;
        }
    }
}

if(cnt)
cout<<"-1"<<endl;
else cout<<ans<<endl;

}
}