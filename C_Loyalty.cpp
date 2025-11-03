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
int n, x;
cin>>n>>x;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

sort(arr.begin(), arr.end());
vector<int>temp;
int prev = 0, f = 0;
int sum = 0, ans = 0;

int i = 0, j = n-1;
while(i <= j){
    if(((sum + arr[j])/x) > prev){
        prev = (sum + arr[j])/x;
        sum += arr[j];
        ans += arr[j];
        temp.push_back(arr[j]);
        j--;
    }
    else{
        sum += arr[i];
        temp.push_back(arr[i]);
        i++;
    }
}

cout<<ans<<endl;
for(auto it: temp)
cout<<it<<" ";
cout<<endl;

}
}