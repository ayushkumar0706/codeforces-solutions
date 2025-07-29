#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;

vector<vector<long long>>arr(n);
for(int i=0; i<n; i++){
    int m;
    cin>>m;
    arr[i].push_back(m);
    
    for(int j=0; j<m; j++){
        int el;
        cin>>el;
        arr[i].push_back(el);
    }

}

vector<vector<long long>>v(n);

for(int i=0; i<n; i++){
    long long first = LLONG_MAX, second = LLONG_MAX;

    for(int j=1; j<=arr[i][0]; j++){
        if(arr[i][j] <= first){
            second = first;
            first = arr[i][j];
        }
        else{
            if(arr[i][j] <= second){
                second = arr[i][j];
            }
        }
    }

    v[i].push_back(first);
    v[i].push_back(second);
}

long long ans = 0;
long long first = LLONG_MAX;
long long second = LLONG_MAX;

for(int i=0; i<n; i++){
    ans += v[i][1];
    first = min(first, v[i][0]);
    second = min(second, v[i][1]);
}

cout<<(ans + first - second)<<endl;
}
}