#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

vector<bool>isprime(1001, 1);
for(int i=2; i*i<=1001; i++){
    if(isprime[i]){
        for(int j=i*i; j<=1001; j+=i){
            isprime[j] = 0;
        }
    }
}

long long n;
cin>>n;
vector<int>ans;
for(int i=2; i<=n; i++){
    if(isprime[i]){
        int num = i;
        while(num<=n){
            ans.push_back(num);
            num*=i;
        }
    }
}

cout<<ans.size()<<endl;
for(int i=0; i<ans.size(); i++)
cout<<ans[i]<<" ";
cout<<endl;

}