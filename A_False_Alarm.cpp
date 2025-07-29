#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n,x;
cin>>n>>x;

vector<int>v(n);
for(int i=0;i<n;i++){
cin>>v[i];
}

int cnt = 0, use=0;
for(int i=0;i<n;i++){
    if(v[i]==1){
        if(n-(i-1)<=x&&use==0){
            break;
        }
        else{
            if(use==1){
                cnt=1;
                break;
            }
            else{
                i+=(x-1);
                use=1;
            }
        }
    }
}

if(cnt == 0)
     cout<<"YES"<<endl;
     else cout<<"NO"<<endl;

}
}