#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, k;
cin>>n>>k;

int x, a, b, c;
cin>>x>>a>>b>>c;

vector<int>arr(n);
arr[0] = x;
for(int i=1; i<n; i++){
    arr[i] = ((a*arr[i-1])%c+b)%c;
}

int ans = 0;
deque<int>dq;
for(int i=0; i<n; i++){
    while((!dq.empty()) && (dq.front() <= i-k))
    dq.pop_front();

    while((!dq.empty()) && (arr[dq.back()] > arr[i]))
    dq.pop_back();

    dq.push_back(i);
    if(i >= k-1){
        ans ^= arr[dq.front()];
    }
}

cout<<ans<<endl;
    
}