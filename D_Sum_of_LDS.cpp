#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

long long ans = n;
long long len = 1;
for(int i=1; i<n; i++){
    if(arr[i]<arr[i-1]){
        len++;
        long long sum = (len*(len+1)/2) - 1;
        ans += (sum);
    }
    else{
        if(len == 1)
        ans++;
        ans += 3;
        len = 1;
    } 
        

}

cout<<ans<<endl;
    
}
}