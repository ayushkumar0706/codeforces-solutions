#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}

int Xor=0;
for(int i=0;i<n;i++){
    Xor^=arr[i];
}
if(n%2==0&&Xor!=0)
cout<<"-1"<<endl;
else
cout<<Xor<<endl;
}
}