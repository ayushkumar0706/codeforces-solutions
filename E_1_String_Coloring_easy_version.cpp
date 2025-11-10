#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n;
cin>>n;
vector<pair<char, int>>arr(n);
for(int i=0; i<n; i++){
    char x;
    cin>>x;
    arr[i].first = x;
    arr[i].second = i;
}

vector<int>color(n, -1);
for(int i=1; i<n; i++){
    int j = i;
    while((j > 0) && (arr[j].first) < (arr[j-1].first)){
        if((color[arr[j].second] == -1) && (color[arr[j-1].second] == -1)){
            color[arr[j].second] = 0;
            color[arr[j-1].second] = 1;
        }
        else{
            if(color[arr[j].second] == color[arr[j-1].second]){
                cout<<"NO"<<endl;
                return 0;
            }
            else{
                if(color[arr[j].second] == -1){
                    color[arr[j].second] = (color[arr[j-1].second] + 1)%2;
                }
                else{
                    color[arr[j-1].second] = (color[arr[j].second] + 1)%2;
                }
            }
        }
        swap(arr[j-1], arr[j]);
        j--;
    }
}

cout<<"YES"<<endl;
for(int i=0; i<n; i++){
    if(color[i] == -1)
    cout<<"0";
    else 
    cout<<color[i];
}

cout<<endl;

}
