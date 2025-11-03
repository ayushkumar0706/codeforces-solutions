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
int n, q;
cin>>n>>q;
string s;
cin>>s;
vector<int>arr(q);
for(int i=0;i<q;i++){
cin>>arr[i];
}

int cnt = 0;
for(auto it: s){
    if(it == 'B'){
        cnt = 1;
        break;
    }
}

for(int i=0; i<q; i++){
    int num = arr[i];
    int steps = 0;
    if(!cnt){
        cout<<num<<endl;
        continue;
    }
    while(num != 0){
        for(int i=0; i<n; i++){
            if(num == 0)
            break;

            if(s[i] == 'A')
            num--;
            else num /= 2;
            steps++;
        }
    }

    cout<<steps<<endl;
}

}
}