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

vector<int>left_min(n), right_min(n);
left_min[0] = arr[0];
right_min[n-1] = arr[n-1];

for(int i=1; i<n; i++){
    left_min[i] = min(left_min[i-1], arr[i]);
    // cout<<left_min[i]<<" ";
}

for(int i=n-2; i>=0; i--){
    right_min[i] = min(right_min[i+1],arr[i]);
    // cout<<right_min[i]<<" ";
}

int i = 1, cnt = 0;
for(i=1; i<n-1; i++){
    if(arr[i] > left_min[i] && arr[i] > right_min[i]){
        cnt = 1;
        break;
    }
}

int left = left_min[i], right = right_min[i];
if(cnt == 1){
    for(int i=0; i<n; i++){
        if(left_min[i] == left){
            left = i+1;
            break;
        }
    }

    for(int i=n-1; i>=0; i--){
        if(right_min[i] == right){
            right = i+1;
            break;
        }
    }
}

if(cnt == 1){
    cout<<"YES"<<endl;
    cout<<left<<" "<<i+1<<" "<<right<<endl;
}
else{
    cout<<"NO"<<endl;
}

}
}