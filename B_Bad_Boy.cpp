#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long n, m, i, j;
cin>>n>>m>>i>>j;

long a = abs(j - 1) + abs(i - 1);
long b = abs(j - 1) + abs(i - n);
long c = abs(m - j) + abs(i - 1);
long d = abs(m - j) + abs(i - n);

long maxi = max(a, max(b, max(c, d)));

if(maxi == a){
    cout<<"1 1 ";
}
else if(maxi == b){
    cout<<n<<" "<<"1 ";
}
else if(maxi == c){
    cout<<"1 "<<m<<" ";
}
else{
    cout<<n<<" "<<m<<" ";
}

if(maxi == a){
    cout<<n<<" "<<m<<" ";
}
else if(maxi == b){
    cout<<"1 "<<m<<" ";
}
else if(maxi == c){
    cout<<n<<" "<<"1 ";
}
else{
    cout<<"1 1 ";
}

cout<<endl;
}
}