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
int n, m;
cin>>n>>m;
vector<int>arr(n), ans;
for(int i=0;i<n;i++){
cin>>arr[i];
}

int digit = 0;
for(int i=0; i<n; i++){
    int num = arr[i], cnt = 0;
    while((num%10) == 0){
        num /= 10;
        cnt++;
    }

    if(cnt != 0)
    ans.push_back(cnt);
    
    while(num){
        num /= 10;
        cnt++;
    }

    digit += cnt;
}

sort(ans.begin(), ans.end(), greater<int>());
int size = ans.size();
for(int i=0; i<size; i +=2){
    digit -= ans[i];
}    

if(digit > m)
cout<<"Sasha"<<endl;
else cout<<"Anna"<<endl;

}
}