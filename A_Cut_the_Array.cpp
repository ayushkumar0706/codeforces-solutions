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
vector<int>arr(n), prefix(n);
int sum = 0;
for(int i=0;i<n;i++){
cin>>arr[i];
sum += arr[i];
prefix[i] = sum;
}

int total =prefix[n-1];
int l = 0, r = 0;
int cnt = 0;
for(int i=0; i<n-2; i++){
    int sum1 = prefix[i];
    for(int j=i+1; j<n-1; j++){
        int sum2 = prefix[j] - sum1;
            int sum3 = total - (sum1+sum2);
            if((sum1%3) == (sum2%3) && (sum1%3) == (sum3%3)){
                l=i+1;
                r=j+1;
                cnt = 1;
                break;
            }
            if((sum1%3) != (sum2%3) && (sum1%3) != (sum3%3) && (sum2%3) != (sum3%3)){
                l=i+1;
                r=j+1;
                cnt = 1;
                break;
            }
    }
    if(cnt)
    break;
}

cout<<l<<" "<<r<<endl;
    
}
}