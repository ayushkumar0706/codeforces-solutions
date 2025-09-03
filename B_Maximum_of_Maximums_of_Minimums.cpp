#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n,k;
cin>>n>>k;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

if(k == 1){
    cout<<*min_element(arr.begin(), arr.end())<<endl;
}
else{
    if(n > 2 && k == 2){
        vector<int>pre(n), suf(n);
        int maxi = INT_MIN;
        pre[0]=arr[0], suf[n-1]=arr[n-1];
        for(int i=1; i<n; i++)
        pre[i] = min(pre[i-1], arr[i]);

        for(int i=n-2; i>=0; i--)
        suf[i] = min(suf[i+1], arr[i]);

        for(int i=0; i<n; i++){
            maxi = max(maxi, max(pre[i], suf[i]));
        }
        cout<<maxi<<endl;
    }
    else
    cout<<*max_element(arr.begin(), arr.end())<<endl;
}

}