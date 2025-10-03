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
for(int i=n; i>=1; i--)
cout<<i<<" ";
cout<<n<<" ";
for(int i=1; i<n; i++)
cout<<i<<" ";
cout<<endl;

}
}