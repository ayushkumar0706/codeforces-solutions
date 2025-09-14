#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>even, odd;
for(int i=0;i<n;i++){
    int x ;
    cin>>x;
if((x%2) != 0){
    odd.push_back(x);
}
else
even.push_back(x);
}

int o = odd.size();
if(o == 0){
    cout<<"0"<<endl;
    continue;
}

int sum = accumulate(even.begin(), even.end(), 0ll);
sort(odd.rbegin(), odd.rend());
for(int i=0; i<((o+1)/2); i++){
    sum += odd[i];
 }

 cout<<sum<<endl;
    
}
}