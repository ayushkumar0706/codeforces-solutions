#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int n, q;
cin>>n>>q;
vector<long long>arr(n), brr(q);
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<q;i++){
cin>>brr[i];
}

vector<int>index(51, 0);
for(int i=0; i<n; i++){
    if(index[arr[i]] == 0)
    index[arr[i]] = i+1;
}

for(int i=0; i<q; i++){
    int el = index[brr[i]];
    cout<<el<<" ";
    for(int j=1; j<51; j++){
        if(index[j] != 0 && index[j] < el){
            index[j]++;
        }
    }

    index[brr[i]] = 1;
}

cout<<endl;
    
}