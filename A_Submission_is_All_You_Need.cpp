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
vector<int>arr(n);
for(int i=0; i<n; i++)
cin>>arr[i];

int score = 0;
for(int i=0; i<n; i++){
    if(arr[i] == 0)
    score++;
    else score+=arr[i];
}

cout<<score<<endl;

}
}