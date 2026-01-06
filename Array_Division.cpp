#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool isValid(vector<int>arr, int k, int value){
    int part = 1, sum = 0;
    for(auto el: arr){
        if((sum + el) > value){
            part++;
            sum = 0;
        }

        sum += el;
        if(part > k)
        return false;
    }

    return true;
}

signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, k;
cin>>n>>k;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

int l = *max_element(arr.begin(), arr.end());
int h = accumulate(arr.begin(), arr.end(), 0ll);

int ans = h;
while(l <= h){
    int mid = l + (h-l)/2;
    if(isValid(arr, k, mid)){
        ans = mid;
        h = mid - 1;
    }
    else{
        l = mid + 1;
    }
}

cout<<ans<<endl;

}