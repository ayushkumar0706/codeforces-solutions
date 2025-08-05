#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>arr(n);
for(int i=0; i<n; i++)
cin>>arr[i];

sort(arr.begin(), arr.end());
int cnt = 0;
for(int i=0; i<n; i++){
    if(arr[i] == 1){
        cnt = 1;
        break;
    }
}

if(!cnt)
cout<<"YES"<<endl;
else{
    if(arr[0] == 0)
    cout<<"NO"<<endl;
    else{
        for(int i=0; i<n-1; i++){
            if(arr[i+1] != arr[i] && arr[i+1]-arr[i] < 2){
                cnt = 0;
                break;
            }
        }

        if(cnt)
        cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}
}
}