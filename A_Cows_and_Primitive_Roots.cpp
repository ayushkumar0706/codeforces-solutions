#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long p;
cin>>p;

long long ans = 0;
for(long long i=1; i<p; i++){
    vector<long long>power(p, i);

    for(int k=2; k<p; k++){
        power[k] = (power[k-1]*1ll*i)%p;
    }

    int cnt = 0;
    for(int j=1; j<p-1; j++){
        if(power[j]%p == 1){
            cnt = 1;
            break;
        }
    }

    if(power[p-1]%p != 1)
    cnt = 1;

    if(cnt == 0)
    ans++;
}

cout<<ans<<endl;
}