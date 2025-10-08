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

    int open = 0, cnt = 1;
    vector<int>ans(n, 0);
    for(int i=0; i<n; i++){
        if(s[i] == '('){
            open++;
            if(open > 0){
                ans[i] = 1;
                cnt = 2;
            }
        }
        else{
            if(open > 0){
                ans[i] = 1;
                cnt = 2;
            }
            open--;
        }
    }

    if(open != 0){
        cout<<"-1"<<endl;
        continue;
    }
     int size = 1;
    for(int i=0; i<n; i++){
        if(ans[i] == 0){
            if(cnt == 2){
                ans[i] = 2;
                size = 2;
            }
            else{
            ans[i] = 1;
            cnt = 1;
            }
        }
    }

    cout<<size<<endl;
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }

    cout<<endl;
}
}