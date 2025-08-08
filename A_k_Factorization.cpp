#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long n, k;
cin>>n>>k;

vector<long long>ans;
long long cnt = k;
for(long long i=2; i<=n; i++){
    while(n%i == 0 && cnt>1){
        n/=i;
        ans.push_back(i);
        cnt--;
    }

    if(cnt == 1)
    break;
}

if(n != 1)
ans.push_back(n);
if(ans.size() == k){
    for(auto it: ans)
    cout<<it<<" ";
}
else cout<<"-1";
cout<<endl;

}