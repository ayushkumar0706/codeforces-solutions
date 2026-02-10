#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
vector<int>arr(4);
int sum = 0;
for(int i=0; i<4; i++){
    cin>>arr[i];
    sum += arr[i];
}

cout<<(15-sum)<<endl;
    
}