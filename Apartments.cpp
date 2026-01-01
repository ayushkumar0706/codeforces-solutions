#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, m, k;
cin>>n>>m>>k;
vector<int>arr(n), brr(m);
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<m;i++){
cin>>brr[i];
}

sort(arr.begin(), arr.end());
sort(brr.begin(), brr.end());

int ans = 0, i = 0, j = 0;
while((i < n) && ( j < m)){
    int low = brr[j] - k;
    int high = brr[j] + k;
    if((arr[i] >= low) && (arr[i] <= high)){
        ans++;
        i++;
        j++;
    }
    else{
        if(high < arr[i]){
            j++;
        }
        else{
            i++;
        }
    }
}

cout<<ans<<endl;

}