#include<bits/stdc++.h>
using namespace std;
bool cmp(const vector<long long>& a, const vector<long long>& b) {
    // if (a[0] != b[0])
    //     return a[0] < b[0];           
    return a[1] > b[1];           
}
bool cmp1(const vector<long long>& a, const vector<long long>& b) {
    // if (a[0] != b[0])
    //     return a[0] < b[0];           
    return a[1] < b[1];           
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<vector<long long>>arr(n, vector<long long>(3));
for(int i=0; i<n; i++){
    cin>>arr[i][0];
    cin>>arr[i][1];
    arr[i][2] = i+1;
}

sort(arr.begin(), arr.end());
sort(arr.begin(),arr.begin()+n/2,cmp1);
sort(arr.begin()+n/2, arr.end(), cmp);

for(int i=0; i<n/2; i++){
    cout<<arr[i][2]<<" ";
    cout<<arr[n/2+i][2];
    cout<<endl;
}

}
}