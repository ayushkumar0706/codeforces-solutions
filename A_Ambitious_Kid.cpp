#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int Zero=0,mini=INT_MAX;

    for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==0){
        Zero=1;
    }
    mini=min(mini,abs(arr[i]));
    }

    if(Zero==1)
    cout<<"0"<<endl;
    else
    cout<<mini<<endl;
}