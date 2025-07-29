#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>arr(n);
for(int i=0; i<n; i++)
cin>>arr[i];

int i=0, j=n-1;
int cnt = 0;
while(i<=j){
    if(arr[i]>arr[j]){
        if(i!=j){
            if(cnt == 0){
                cout<<"L"<<"R";
                cnt = 1;
            }
            else{
                cout<<"R"<<"L";
                cnt = 0;
            } 
        }
        else cout<<"L";
        i++;j--;
    }
    else{
        if(i!=j){
            if(cnt == 1){
                cout<<"L"<<"R";
                cnt = 0;
            }
            else{
                cout<<"R"<<"L";
                cnt = 1;
            } 
        }
        else cout<<"L";
        i++;j--;
    }
}
cout<<endl;

}
}