#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--){
int n, r, b;
cin>>n>>r>>b;

int nr = (r/(b+1));
int extra = (r - (nr*(b+1)));
int m = b + 1;

while(extra-- && m--){
    for(int i=0; i<=nr; i++){
        cout<<"R";
    }
    if(b>0)
    cout<<"B";
    b--;
}

while(m--){
    for(int i=0; i<nr; i++){
        cout<<"R";
    }

    if(b>0)
    cout<<"B";
    b--;
}

cout<<endl;

}
}