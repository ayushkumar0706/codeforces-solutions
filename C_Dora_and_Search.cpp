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

int start = 0, end = n-1;
int l = -1, r = -1;
int cnt1 = 0, cnt2 = 0;
while(start < end){
    if((arr[start] == (cnt1+1) || arr[start] == (n-cnt2)) && (arr[end] == (cnt1+1) || arr[end] == (n-cnt2))){
        // cout<<"1 ";
        // cout<<arr[start]<<":"<<cnt1+1<<" ";
        // cout<<arr[end]<<":"<<n-cnt2<<" ";
        cnt1++;cnt2++;
        start++;
        end--;
    }
    else if(arr[start] == (cnt1+1) || arr[start] == (n-cnt2)){
        // cout<<"2 ";
        if(arr[start] == (cnt1+1))
        cnt1++;
        else cnt2++;
        start++;
    }
    else if(arr[end] == (cnt1+1) || arr[end] == (n-cnt2)){
        // cout<<"3 ";
        if(arr[end] == (cnt1+1))
        cnt1++;
        else cnt2++;
        end--;
    }
    else{
        l = start + 1;
        r = end + 1;
        break;
    }
}

if(l > 0 && r > 0){
    cout<<l<<" "<<r<<endl;
}
else cout<<"-1"<<endl;
    
}
}