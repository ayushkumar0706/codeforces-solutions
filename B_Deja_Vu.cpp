#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n, q;
cin>>n>>q;
vector<long long>arr(n), brr(q);
for(int i=0;i<n;i++){
cin>>arr[i];
}

for(int i=0;i<q;i++){
cin>>brr[i];
}

int mini = 31;
for(int i=0; i<q; i++){
    if(brr[i] < mini){
        int el = pow(2, brr[i]);
        for(int j=0; j<n; j++){
            if(arr[j]%el == 0){
                arr[j] += (el/2);
            }
        }
        mini = brr[i];
    }
}

for(auto it: arr)
cout<<it<<" ";
cout<<endl;

}
}