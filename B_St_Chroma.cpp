#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n, x;
cin>>n>>x;


int j = 0;
for(int i=0;i<n-1;i++){
    if(j!=x)
    cout<<j<<" ";
    else{
        cout<<j+1<<" ";
        j++;
    }
    j++;
}

if(j>=x)
cout<<x<<" "<<endl;
else
cout<<j<<" "<<endl;
    
}
}