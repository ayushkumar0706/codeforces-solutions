#include<bits/stdc++.h>
using namespace std;

int main()
{
long long t;
cin>>t;
while(t--){
long long n, k;
cin>>n>>k;

vector<pair<long long, int>>index(n);
for(int i=0; i<n; i++){
    cin>>index[i].first;
    index[i].second = i;
}

for(int i=0; i<n; i++){
    index[i].first %= k;
    if(index[i].first == 0)
    index[i].first = k;
}

 sort(index.begin(), index.end(), [](const pair<long long, int>&a, const pair<long long, int>&b){
    if(a.first != b.first)
    return a.first > b.first;

    return a.second < b.second;
 });

for(int i=0; i<n; i++){
    cout<<index[i].second + 1<<" ";
}
cout<<endl;
}
}