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
for(int i=0; i<n; i++){
    cin>>arr[i];
}

long long ans = 0;
for(int i=1; i<=n; i++){
    long long pos = 0;
    while(arr[pos] != i) pos++;

    ans += min(pos, arr.size()-pos-1);
    arr.erase(arr.begin()+pos);
}

cout<<ans<<endl;

}
}