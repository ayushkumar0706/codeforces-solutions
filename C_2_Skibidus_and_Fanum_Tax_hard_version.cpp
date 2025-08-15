#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
long long n, m;
cin>>n>>m;
vector<long long>arr(n), brr(m);
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<m;i++){
cin>>brr[i];
}

int cnt = 0;
sort(brr.begin(), brr.end());

long long prev = min(arr[0], (brr[0] - arr[0]));
arr[0] = prev;

long long update;

for(int i=1; i<n; i++){
    int start = 0, end = m-1;
    update = arr[i];

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(brr[mid] - arr[i] >= prev){
            update = brr[mid] - arr[i];
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    if(arr[i] >= prev)
    arr[i] = min(arr[i], update);
    else arr[i] = update;
    prev = arr[i];

    if(arr[i] < arr[i-1]){
        cnt = 1;
        break;
    }
} 

cout<<(cnt ? "NO" : "YES")<<endl;

}
}