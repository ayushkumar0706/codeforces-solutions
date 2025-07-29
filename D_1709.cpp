#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>arr(n), brr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

for(int i=0;i<n;i++){
cin>>brr[i];
}

vector<vector<int>>ans;

for(int i=0; i<n-1; i++){
    for(int j=0; j<n-i-1; j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
            ans.push_back({1, j+1});
        }

        if(brr[j] > brr[j+1]){
            swap(brr[j], brr[j+1]);
            ans.push_back({2, j+1});
        }
    }
}

for(int i=0; i<n; i++){
    if(arr[i] > brr[i]){
        swap(arr[i], brr[i]);
        ans.push_back({3, i+1});
    }
}

int m = ans.size();
cout<<m<<endl;

for(int i=0; i<m; i++){
   cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
}
}
}