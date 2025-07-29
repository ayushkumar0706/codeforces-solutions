#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--){
long long n, k, b, s;
cin>>n>>k>>b>>s;

long long min_sum = k * b;
if(s < min_sum){
    cout<<"-1"<<endl;
    continue;
}

long long req = min_sum + (n * (k - 1));
if(s > req){
    cout<<"-1"<<endl;
    continue;
}

long long cnt = s - (min_sum + k - 1);
long long i = n-1;
while(i--){
    if(cnt >= k-1)
    cout<<k-1<<" ";
    else{
        if(cnt<0)
        cout<<"0"<<" ";
        else
        cout<<cnt<<" ";
    }
    cnt -= (k - 1);
}

cout<<(s >= (min_sum+k-1) ? (min_sum+k-1) : s) <<endl;
}
}