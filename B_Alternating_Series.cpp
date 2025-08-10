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

for(int i=0; i<n; i++){
    if(i%2 != 0){
        if(i!=n-1)
        cout<<"3 ";
        else cout<<"2 ";
    }
    else cout<<"-1 ";
}
cout<<endl;
}
}