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

sort(arr,arr+n);

vector<int>b;
vector<int>c;

for(int i=0;i<n;i++){
    if(b.size()>0&&arr[i]!=b.back())
    c.push_back(arr[i]);
    else
    b.push_back(arr[i]);
}

if(c.empty())
cout<<"-1"<<endl;
else{
    cout<<b.size()<<" "<<c.size()<<endl;
    for(auto it:b)
    cout<<it<<" ";
    cout<<endl;
    
    for(auto it:c)
    cout<<it<<" ";
    cout<<endl;
}
}
}   