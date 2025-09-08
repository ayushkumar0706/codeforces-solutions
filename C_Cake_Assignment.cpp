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
int k, x;
cin>>k>>x;
vector<int>arr;

int fir = x;
int sec = (1ll<<(k+1)) - x;

while(fir != sec){
    
    if (fir < sec) {
        arr.push_back(1);
        sec -= fir;
        fir *= 2;
    }
    else {
        arr.push_back(2);
        fir -= sec;
        sec *= 2;
    }
}

int size = arr.size();
reverse(arr.begin(), arr.end());
cout<<size<<endl;
for(auto it: arr)
cout<<it<<" ";
cout<<endl;
    
}
}