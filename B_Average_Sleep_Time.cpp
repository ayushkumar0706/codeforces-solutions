#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, k;
cin>>n>>k;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}

double sum = 0, total = 0;
for(int i=0; i<k; i++){
    sum += arr[i];
}

total += sum;
for(int i=k; i<n; i++){
    sum += arr[i];
    sum -= arr[i-k];
    total += sum;
}

    cout << fixed << setprecision(10) << total / (n - k + 1) << endl;    
}