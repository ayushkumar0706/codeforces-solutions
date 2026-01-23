#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, k;
cin>>n>>k;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

map<int, int>mp;
map<int, set<int>>freq;

int maxFreq = 0, j = 0;
for(int i=0; i<n; i++){
    if(i < k){
        freq[mp[arr[i]]].erase(arr[i]);
        mp[arr[i]]++;
        freq[mp[arr[i]]].insert(arr[i]);
        maxFreq = max(maxFreq, mp[arr[i]]);
        if(i == (k-1))
        cout<<*freq[maxFreq].begin()<<" ";
    }
    else{
        if(mp[arr[j]] == maxFreq){
            if(freq[mp[arr[j]]].size() == 1){
                maxFreq--; 
            }
        }
        freq[mp[arr[j]]].erase(arr[j]);
        mp[arr[j]]--;
        freq[mp[arr[j]]].insert(arr[j]);

        freq[mp[arr[i]]].erase(arr[i]);
        mp[arr[i]]++;
        freq[mp[arr[i]]].insert(arr[i]);
        maxFreq = max(maxFreq, mp[arr[i]]);
        j++;
        cout<<*freq[maxFreq].begin()<<" ";
    }
}

}