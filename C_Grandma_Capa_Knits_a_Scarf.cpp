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
int ans = n;
unordered_set<char>st;
for(auto it: s)
st.insert(it);

for(auto it: st){
    char c = it;
    int i = 0, j = n-1, cnt = 0;
    bool check = 1;
    while(i < j){
        if(s[i] != s[j]){
            if(s[i] == c){
                i++;
                cnt++;
            }
            else if(s[j] == c){
                j--;
                cnt++;
            }
            else{
                check = 0;
                break;
            }

        }
        else{
            i++;
            j--;
        }
    }

    if(check){
        ans = min(ans, cnt);
    }
}

if(ans == n)
cout<<"-1"<<endl;
else cout<<ans<<endl;
    
}
}