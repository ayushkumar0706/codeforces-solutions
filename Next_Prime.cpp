#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--){
int n;
cin>>n;

if(n <= 2){
    if(n != 2)
    cout<<"2"<<endl;
    else cout<<"3"<<endl;
    continue;
}

int ans = -1;
int num = n;
if(num%2)
num += 2;
else num++;
while(true){
    int cnt = 1;
    for(int i=3; i*i<=num; i+=2){
        if((num%i) == 0){
            cnt = 0;
            break;
        }
    }
    if(cnt){
        break;
    }
    num += 2;
}

cout<<num<<endl;
    
}
}