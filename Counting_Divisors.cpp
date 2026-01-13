#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

const int N = 1000000;
vector<int>divisors(N + 1);

void precompute() {
    for (int i=1; i<=N; i++) {
        for (int j=i; j<= N; j+=i) {
            divisors[j]++;
        }
    }
}


signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
precompute();
int t;
cin>>t;
while(t--){
int n;
cin>>n;

cout<<divisors[n]<<endl;
}
}