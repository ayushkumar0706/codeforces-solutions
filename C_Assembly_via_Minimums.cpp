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
long long m = (n*(n-1))/2;
vector<long long>arr(m);
for(int i=0;i<m;i++){
cin>>arr[i];
}

sort(arr.begin(), arr.end());
int cnt = n-1, i = cnt-1;
while(cnt > 0){
    cout<<arr[i]<<" ";
    cnt--;
    i += cnt;
}

cout<<"1000000000"<<endl;
    
}
}