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
unordered_map<int,int>mp;
for(int i=0;i<n;i++){
cin>>arr[i];
mp[arr[i]]++;
}
if(mp.size()<2)
cout<<"Yes"<<endl;
else if(mp.size()==2){
    int first=-1,sec=-1;
    for(auto it:mp){
        if(first==-1){
            first=it.second;
        }
        else{
            sec=it.second;
        }
    }
    if(abs(first-sec)<=1)
    cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
else cout<<"No"<<endl;

}
}