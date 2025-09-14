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
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

if(n == 1){
    cout<<arr[0]<<endl;
    continue;
}

int odd = 0, even = 0;
int mx1_odd = INT_MIN, mn1_even = INT_MAX;
int mx2_odd = INT_MIN, mn2_even = INT_MAX;
for(int i=0; i<n; i++){
    if((i%2)){
        odd += arr[i];
        mx1_odd = max((2*arr[i])+i, mx1_odd);
        mx2_odd = max((2*arr[i])-i, mx2_odd);
    }
    else{
        even += arr[i];
        mn1_even = min((2*arr[i])+i, mn1_even);
        mn2_even = min((2*arr[i])-i, mn2_even);
    }
}


int cnt = n;
if((n%2) == 0)
cnt -= 2;
else cnt -= 1;

int sum = even - odd;
// cout<<cnt<<" "<<sum<<" "<<(ind_odd)<<" "<<(ind_even)<<" "<<(even_el)<<" "<<(odd_el)<<endl;
cout<<max((cnt+sum), (sum+max((mx1_odd - mn1_even), (mx2_odd - mn2_even))))<<endl;
    
}
}