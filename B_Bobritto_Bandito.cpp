#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n,m,l,r;
cin>>n>>m>>l>>r;
int maxi = min(m, r);
int mini = maxi - m;

cout << mini << " " << maxi << endl;
    
}
}