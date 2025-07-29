#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int cnt = 1;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1])
        cnt++;
        else
        break;
    }

    if(cnt==n){
        cout<<"NO"<<endl;
        continue;
    }

    int maxi=*max_element(arr.begin(),arr.end());
    cout<<"YES"<<endl;

    for(int i=0;i<n;i++){
        if(arr[i]==maxi){
            cout<<"2 ";
        }
        else cout<<"1 ";
    }

    cout<<endl;

}
}