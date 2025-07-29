#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;

int arr[n],Xor=0,zero=0;
for(int i=0;i<n;i++){
cin>>arr[i];
Xor^=arr [i];
if(arr[i]!=0)
zero=1;
}

if(zero==0){
    cout<<"0"<<endl;
    continue;
}

    if(Xor==0){
        cout<<"1"<<endl;
        cout<<1<<" "<<n<<endl;
    }
    else{
        if(n%2==0){
        cout<<"2"<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<n<<endl;
        }
        else{
        cout<<"4"<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<n-1<<endl;
        cout<<2<<" "<<n<<endl;
        cout<<1<<" "<<n<<endl;
        }
    }
}
}