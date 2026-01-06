#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, k;
cin>>n>>k;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

vector<int>idx(n);
iota(idx.begin(), idx.end(), 0);
sort(idx.begin(), idx.end(), [&](int i, int j){
    return arr[i] < arr[j];
});

for(int i=0; i<n-2; i++){
    int key = k - arr[idx[i]];
    if(key <= 0)
    continue; 
    int l = i+1, h = n - 1;
    while(l < h){
        if((arr[idx[l]] + arr[idx[h]]) == key){
            cout<<(idx[i]+1)<<" "<<(idx[l]+1)<<" "<<(idx[h]+1)<<endl;
            return 0;
        }
        else if((arr[idx[l]] + arr[idx[h]]) < key){
            l++;
        }
        else h--;
    }
}

cout<<"IMPOSSIBLE"<<endl;

}