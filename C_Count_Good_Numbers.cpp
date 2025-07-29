#include<bits/stdc++.h>
using namespace std;

long long count (long long l, long long r, long long d){
    return (r/d) - (l-1)/d;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long t;
cin>>t;
while(t--){
long long l, r;
cin>>l>>r;

long long total = r - l + 1;
long long bad_count = 
              count(l, r, 2) + count(l, r, 3) + count(l, r, 5) + count(l, r, 7)
            - count(l, r, 6) - count(l, r, 10) - count(l, r, 14) - count(l, r, 15)
            - count(l, r, 21) - count(l, r, 35)
            + count(l, r, 30) + count(l, r, 42) + count(l, r, 70) + count(l, r, 105)
            - count(l, r, 210);

cout<<total - bad_count<<endl;
    
}
}