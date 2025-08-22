#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;

long long mul = 10;
vector<long long>ans;
while(n / (mul+1)){
    if(n % (mul + 1) == 0){
        ans.push_back(n / (mul + 1));
    }

    mul *= 10;
}

sort(ans.begin(), ans.end());
long long m = ans.size();
cout<<m<<endl;
if(m == 0)
continue;

for(int i=0; i<m; i++)
cout<<ans[i]<<" ";
cout<<endl;
    
}
}