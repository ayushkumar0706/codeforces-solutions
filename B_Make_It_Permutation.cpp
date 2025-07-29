#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
    cout<<(2*n) - 3<<endl;
    for(int i=1; i<=n; i++){
        if(i == 1){
            cout<<i<<" "<<i+1<<" "<<n;
        }
        else if(i == n - 1 || i == n){
            cout<<i<<" 1 "<<i;
        }
        else{
            cout<<i<<" 1 "<<i<<endl;
            cout<<i<<" "<<i+1<<" "<<n;
        }
        cout<<endl;
    }
}
}