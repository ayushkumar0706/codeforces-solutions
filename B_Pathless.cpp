#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long t;
cin>>t;
while(t--){
long long n, s;
cin>>n>>s;

vector<long long>arr(n);
long long sum = 0;
int cnt0 = 0, cnt1 = 0, cnt2 = 0;
for(int i=0; i<n; i++){
    cin>>arr[i];
    if(arr[i] == 0)
    cnt0++;
    else if(arr[i] == 1)
    cnt1++;
    else cnt2++;
    sum += arr[i];
}

if(s>sum+1 || s==sum){
    cout<<"-1"<<endl;
}
else{
    for(int i=0; i<n; i++){
        if(cnt0){
            arr[i]=0;
            cnt0--;
        }
        else{
            if(cnt2){
                arr[i]=2;
                cnt2--;
            }else{
                arr[i]=1;
                cnt1--;
            }
        }
    }

    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
}
}