#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
string s;
cin>>s;

int start = 0, end = k-1;
int cnt = 0;
for(int i=0; i<k; i++){
    if(s[i] == 'B')
    cnt++;
}

int ans = k - cnt;
while(end + 1 < n){
    if(s[start] == 'B')
    cnt--;

    if(s[end+1] == 'B')
    cnt++;

    ans = min(ans, (k - cnt));
    start++;end++;
} 

    cout<<ans<<endl;
}
}