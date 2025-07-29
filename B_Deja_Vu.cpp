#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n, q;
cin>>n>>q;
vector<long long>arr(n), brr(q), ans(q);
for(int i=0;i<n;i++){
cin>>arr[i];
}

for(int i=0;i<q;i++){
cin>>brr[i];
}

for(int i=0; i<q; i++){
    ans[i] = pow(2, brr[i]);
}

for(int i=0; i<q; i++){
    for(int j=0; j<n; j++){
        if(arr[j]%ans[i] == 0)
        arr[j] += (ans[i]/2);
    }
}

for(int i=0; i<n; i++)
cout<<arr[i]<<" ";
cout<<endl;

}
}