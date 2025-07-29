#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long long n, x;
cin>>n>>x;

vector<long long >arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

long long start = 2;
long long end = *max_element(arr.begin(), arr.end()) + (x/n) + ((x%n) != 0);
long long height = start;
while(start <= end){
    long long mid = start + (end - start)/2;
    long long water = 0;
    for(int i=0; i<n; i++){
        if(arr[i]<mid)
        water += mid-arr[i];
    }

    if(water <= x){
        start = mid + 1;
    }
    else end = mid - 1;
}

cout<<start-1<<endl;

}
}