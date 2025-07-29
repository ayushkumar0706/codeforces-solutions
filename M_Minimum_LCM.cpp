#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;

long long fir = n/2, sec =  (n + 1) / 2;
while(sec % fir !=0 && sec < n){
    fir--;
    sec++;
}

cout<<fir<<" "<<sec<<endl;
}
}