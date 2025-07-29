#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;

vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

int ans = INT_MAX;

for(int i=0; i<n; i++){
    if(abs(arr[i] - arr[i+1]) <= 1)
    {
        ans = 0;
        break;
    }
}

if(ans == 0){
    cout<<"0"<<endl;
    continue;
}

for(int i=0; i<n-1; i++){
        int l = min(arr[i], arr[i+1]);
        int r = max(arr[i], arr[i+1]);

        if(i+2 < n && r>=(arr[i+2] - 1) && l<=(arr[i+2] + 1)){
            ans = 1;
            break;
        }

        if(i-1 >= 0 && r>=(arr[i-1] - 1) && l<=(arr[i-1] + 1)){
            ans = 1;
            break;
        }

}

if(ans==INT_MAX)
cout<<"-1"<<endl;
else
cout<<"1"<<endl;
    
}
}