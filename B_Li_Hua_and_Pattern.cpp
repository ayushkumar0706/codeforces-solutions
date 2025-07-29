#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long t;
cin>>t;
while(t--){
long long n, k;
cin>>n>>k;
vector<vector<int>>arr(n, vector<int>(n));
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cin>>arr[i][j];
    }
}

int mismatchCount = 0;
for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
        int ri = n - 1 - i, rj = n - 1 - j;
        if(i < ri || (i == ri && j < rj)) {
            if(arr[i][j] != arr[ri][rj])
                mismatchCount++;
        }
    }
}

if(k < mismatchCount) {
    cout << "NO\n";
} else {
    int extra = k - mismatchCount;
    if(extra % 2 == 0 || n % 2 == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}


    
}
}