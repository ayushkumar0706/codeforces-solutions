#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n, m;
cin>>n>>m;

int arr[n][m], mx = 0;
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>arr[i][j];

        mx = max(mx, arr[i][j]);
    }
}

vector<int>row(n, 0), col(m, 0);
int mx_cnt = 0;

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if(arr[i][j] == mx){
            arr[i][j] = 1;
            mx_cnt++;
            row[i]++;
            col[j]++;
        }
        else arr[i][j] = 0;
    }
}


int cnt = 0;
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if(row[i] + col[j] - arr[i][j] == mx_cnt){
            cnt = 1;
            break;
        }
    }
}

cout<<(cnt == 1 ? mx - 1 : mx ) << endl;
    
}
}