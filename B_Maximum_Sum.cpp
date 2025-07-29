#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<long long>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

sort(arr.begin(), arr.end());
long long sum = accumulate(arr.begin(), arr.end(), 0ll);
long long ans = 0;

int i=0, j=n-1, cnt = k;
long long mini, maxi;
while(cnt--){
    mini = arr[i] + arr[i+1];
    maxi = arr[j];

    if(mini <= maxi){
        i += 2;
        sum -= mini;
    }
    else{
        j--;
        sum -= maxi;
    }

}

mini = 0, maxi = 0;
cnt = k;
i = 0, j = n-1;
while(cnt--){
    mini += (arr[i] + arr[i+1]);
    maxi += arr[j];

    if(mini>maxi){
        ans = -1;
        break;
    }

    i+=2;j--;
}

if(ans == -1){
    ans = accumulate(arr.begin(), arr.begin()+(n-k), 0ll);
}

cout<<max(sum, ans)<<endl;
    
}
}