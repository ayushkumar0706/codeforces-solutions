#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int mod = 1e9 + 7;

int modPow(int n, int x){
    int res = 1;
    while(x > 0){
        if(x%2)
        res = (res * n)%mod;
        n = (n*n)%mod;
        x >>= 1;
    }
    return res;
}

const int MAXN = 1e6;
vector<int>fact(MAXN + 1);
vector<int>factInv(MAXN + 1);

void precompute(){
    fact[0] = 1;
    for(int i=1; i<=MAXN; i++){
        fact[i] = (fact[i-1] * i)%mod;
    }
    
    factInv[MAXN] = modPow(fact[MAXN], mod-2);
    for(int i=MAXN; i>0; i--){
        factInv[i-1] = (factInv[i] * i)%mod;
    }
}


signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
precompute();
string s;
cin>>s;

vector<int>freq(26, 0);
for(auto it: s){
    freq[it-'a']++;
}

int n = s.size();
int ans= fact[n];
for(int i=0; i<26; i++){
    if(freq[i] > 1){
        ans = (ans * factInv[freq[i]])%mod;
    }
}

cout<<ans<<endl;

    
}