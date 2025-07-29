#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>arr(n), brr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
cin>>brr[i];
}

long long l = -1, r = -1;
long long mini = LLONG_MAX, maxi = LLONG_MIN;
for(int i=0; i<n; i++){
    if(l == -1 && arr[i]!=brr[i]){
        l = i+1;
    }

    if(l!=-1 && arr[i]!=brr[i]){
        r = i+1;
        mini = min(mini, brr[i]);
        maxi = max(maxi, brr[i]);
    }
}

long long ind1 = l, ind2 = r;
l--;
r++;

while(l>0 && arr[l-1]<=mini){
    mini = arr[l-1];
    l--;ind1--;
}

while(r<=n && arr[r-1]>=maxi){
    maxi = arr[r-1];
    r++;ind2++;
}

cout<<ind1<<" "<<ind2<<endl;
    
}
}