#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

sort(arr.begin(), arr.end());
long long maxi = *max_element(arr.begin(), arr.end());
long long ans = 0;
for(int i=0; i<n-2; i++){
    for(int j=i+1; j<n-1; j++){
        int start = j+1, end = n-1, sum = arr[i] + arr[j];
        int ind1 = j+1, ind2 = j;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(sum > arr[mid] && (sum + arr[mid]) > maxi){
                ind1 = mid;
                end = mid - 1;
            }
            else{
                if(sum <= arr[mid])
                end = mid - 1;
                else start = mid + 1;
            }
        }

        start = ind1, end = n-1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(sum > arr[mid] && (sum + arr[mid]) > maxi){
                ind2 = mid;
                start = mid + 1;
            }
            else{
                if(sum <= arr[mid])
                end = mid - 1;
                else start = mid + 1;
            }
        }

        ans += (ind2 - ind1 + 1);
    }
}

cout<<ans<<endl;

}
}