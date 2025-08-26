#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
long long n, c;
cin>>n>>c;
vector<long long>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
arr[i] += (i+1);
}

sort(arr.begin(), arr.end());
int cnt = 0;
for(int i=0; i<n; i++){
    if(arr[i] <= c){
        cnt++;
        c -= arr[i];
    }
    else break;
}

cout<<cnt<<endl;
    
}
}