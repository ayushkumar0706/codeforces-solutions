#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;

vector<long long>arr(n);
vector<long long>brr(n);

for(long long i=0;i<n;i++)
cin>>arr[i];

for(long long i=0;i<n;i++)
cin>>brr[i];

long long cnt = 0;
for(auto it: brr){
if(it==-1)
cnt++;
}

if(cnt==n){
    long long mini = *min_element(arr.begin(),arr.end());
    long long maxi = *max_element(arr.begin(),arr.end());
    long long ans = ((mini+k)-maxi+1);
    if(ans>=0)
    cout<<ans<<endl;
    else cout<<"0"<<endl;
    continue;
}

long long ans = -1;
cnt = 0;
for(long long i=0;i<n;i++){
    if(brr[i]>=0){
        if(ans==-1)
        ans=arr[i]+brr[i];
        else{
            if(arr[i]+brr[i]!=ans){
                cnt=1;
                break;
            }
        }
    }
}

if(cnt==1){
    cout<<"0"<<endl;
    continue;
}

cnt = 0;
for(int i=0;i<n;i++){
    if(brr[i]==-1 && ans-arr[i]>k || brr[i]==-1 && ans-arr[i]<0 )
    {
        cnt=1;
        break;
    }
}

if(cnt==1){
    cout<<"0"<<endl;
}
else{
    cout<<"1"<<endl;
}


}
}