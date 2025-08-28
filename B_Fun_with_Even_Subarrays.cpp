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
vector<long long>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

long long ans = 0;
int fir = n-2;
int sec = n-1;
while(fir >= 0){
    if(arr[fir] == arr[sec]){
        fir--;
    }
    else{
        ans++;
        fir -= (sec-fir);
    }
}

cout<<ans<<endl;

}
}