#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

vector<int>temp;
temp.push_back(arr[0]);

for(int i=1; i<n; i++){
    if(arr[i] > temp.back()){
        temp.push_back(arr[i]);
    }
    else{
        int idx = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();
        temp[idx] = arr[i];
    }
}

cout<<temp.size()<<endl;

}