#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

int N = *max_element(arr.begin(), arr.end());
vector<int>freq(N+1, 0);

for(auto it: arr) freq[it]++;

int ans = 1;
for(int i=2; i<=N; i++){
    int cnt = 0;
    for(int j=i; j<=N; j+=i){
        cnt += freq[j];
        if(cnt >= 2){
            ans = max(ans, i);
            break;
        }
    }
}

cout<<ans<<endl;

}