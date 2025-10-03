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
string s;
cin>>s;

int cnt1 = 0, cnt2 = 0;
int idxa = 0, idxb = 0;
for(int i=0; i<n/2; i++){
    if(s[i] == 'a'){
        cnt1 += (i - idxa);
        idxa++;
    }
}

for(int i=0; i<n/2; i++){
    if(s[i] == 'b'){
        cnt2 += (i - idxb);
        idxb++;
    }
}

idxa = n-1, idxb = n-1;
for(int i=n-1; i>=n/2; i--){
    if(s[i] == 'a'){
        cnt1 += (idxa - i);
        idxa--;
    }
}

for(int i=n-1; i>=n/2; i--){
    if(s[i] == 'b'){
        cnt2 += (idxb - i);
        idxb--;
    }
}

cout<<min(cnt1, cnt2)<<endl;

}
}