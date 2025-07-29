#include<bits/stdc++.h>
using namespace std;

int num_bits(int n){
    int cnt = 0;
    while(n){
        cnt++;
        n /= 2;
    }

    return cnt;
}

int main()
{
long long t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>ans(n, 1);
for(int i=1; i<n; i++){
    ans[i] = num_bits(i);
}

int maxi = *max_element(ans.begin(), ans.end());
int i = 1;
while(i<n && ans[i] != maxi){
    cout<<i<<" ";
    i++;
}

cout<<"0 ";
while(i<n){
    cout<<i<<" ";
    i++;
}

cout<<endl;
}
}