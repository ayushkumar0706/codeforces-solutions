#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, m;
cin>>n>>m;
vector<int>arr(n), pos(n+1);
for(int i=0;i<n;i++){
cin>>arr[i];
pos[arr[i]] = i;
}

int ans = 1;
for(int i=2; i<=n; i++){
    if(pos[i] < pos[i-1]) 
    ans++;
}

auto check = [&](int x) {
    if ((x <= 1) || (x > n)) return 0LL;
    if (pos[x] < pos[x-1]) return 1LL;
    return 0LL;
};

while (m--) {
    int a, b;
    cin>>a>>b;
    a--, b--;

    int x = arr[a], y = arr[b];

    set<int> affected = {x, x+1, y, y+1};

    for(int v: affected)
    ans -= check(v);

    swap(arr[a], arr[b]);
    pos[x] = b;
    pos[y] = a;

    for(int v: affected)
    ans += check(v);

    cout<<ans<<endl;
}

}


