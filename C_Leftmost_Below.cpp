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

vector<long long>prefix(n, arr[0]);
for(int i=1; i<n; i++){
    prefix[i] = min(arr[i], prefix[i-1]);
}

int cnt = 0;
for(int i=0; i<n; i++){
    if((2*prefix[i])-1 < arr[i]){
        cnt = 1;
        break;
    }
}

if(cnt == 0)
cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
}