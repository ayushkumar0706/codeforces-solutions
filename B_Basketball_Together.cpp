#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n, power;
cin>>n>>power;

vector<long long>arr(n);
for(int i=0; i<n; i++){
    cin>>arr[i];
}

sort(arr.begin(), arr.end());
int ans = 0;
int start = 0, end = n - 1;
long long sum = 0;
while(start < end){
    sum += arr[end];

    if(sum > power){
        end--;
        ans++;
        sum = 0;
    }
    else{
        while(start < end && sum <= power){
            sum += arr[end];
            start++;
        }

        end--;
        if(sum > power)
        ans++;
        sum = 0;
    }
}

if(start == end){
    if(arr[start] > power)
    ans++;
}

cout<<ans<<endl;
}