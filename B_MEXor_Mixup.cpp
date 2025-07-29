#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long t;
cin>>t;
while(t--){
int a, b;
cin>>a>>b;

int ans = a;
int Xor = 0;
a--;

if (a % 4 == 0) Xor = a;
else if (a % 4 == 1) Xor = 1;
else if (a % 4 == 2) Xor = a + 1;
else Xor = 0;

a++;
int x = Xor^b;
if(Xor != b){
    ans++;
    if(x == a)
    ans++;
}

cout<<ans<<endl;
}
}