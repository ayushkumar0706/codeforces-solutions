#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long long a,b,xk,yk,xq,yq;
cin>>a>>b;
cin>>xk>>yk;
cin>>xq>>yq;

long long dx[4] = {-1, 1, -1, 1};
long long dy[4] = {1, 1, -1, -1};
set<pair<long long, long long>>king, queen;
for(int i=0; i<4; i++){
    king.insert({xk + (a*dx[i]), yk + (b*dy[i])});
    king.insert({xk + (b*dx[i]), yk + (a*dy[i])});

    queen.insert({xq + (a*dx[i]), yq + (b*dy[i])});
    queen.insert({xq + (b*dx[i]), yq + (a*dy[i])});
}

long long ans  = 0;
for(auto it: king){
    if(queen.find(it) != queen.end())
    ans++;
}

cout<<ans<<endl;
}
}