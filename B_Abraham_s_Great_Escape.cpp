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
int n, k;
cin>>n>>k;

if(k == ((n*n)-1)){
    cout<<"NO"<<endl;
    continue;
}

cout<<"YES"<<endl;
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        if(k > 0)
        cout<<"U";
        else{
            if(j==n-1){
                if(i != n-1)
                cout<<"D";
                else cout<<"L";
            }
            else{
                cout<<"RL";
            }
            j++;
        }
        k--;
    }
    cout<<endl;
}
    
}
}