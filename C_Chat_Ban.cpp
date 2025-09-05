#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--){
int k, x;
cin>>k>>x;


int start = 1, end = k;
int ans1 = 0;
while(start <= end){
    int n = start + (end - start) / 2;
    int sum = (n*(n+1))/2;
    if(sum <= x){
        ans1 = n;
        start = n + 1;
    }
    else{
        end = n - 1;
    }
}

int sum = (k*(k+1))/2;
if(x <= sum){
    int sum_ans1 = (ans1*(ans1+1))/2;
    if(sum_ans1 == x)
    cout<<ans1<<endl;
    else
    cout<<ans1 + 1<<endl;
    continue;
}

x -= sum;
int total = (k*(k-1))/2;
start = 1, end = k-1;
int ans2 = 0;
while(start <= end){
    int mid = start + (end - start) / 2;
    int n = (k-1-mid);
    sum = (n*(n+1))/2;
    if((total - sum) <= x){
        ans2 = mid;
        start = mid + 1;
    }
    else{
        end = mid - 1;
    }
}

sum = (k*(k-1))/2;
if(x <= sum){
    int n = (k-1-ans2);
    int sum_ans2 = (n*(n+1))/2;
    sum_ans2 = (total - sum_ans2);
    if(sum_ans2 < x)
    ans2 += 1;

    cout<<ans1 + ans2<<endl;
    continue;
}

cout<<((2*k) - 1)<<endl;
    
}
}