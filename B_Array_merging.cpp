#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long >arr(n), brr(n);
for(int i=0; i<n; i++){
cin>>arr[i];
}

for(int i=0; i<n; i++){
cin>>brr[i];
}

map<long long , long long>mp1, mp2;
long long freqa = 1;
for(int i=0; i<n-1; i++){
    if(arr[i] == arr[i+1]){
        freqa++;
        if(mp1.find(arr[i]) != mp1.end())
        mp1[arr[i]] = max(mp1[arr[i]], freqa);
        else
        mp1[arr[i]] = 2;
    }
    else{
        freqa = 1;
        if(mp1.find(arr[i]) == mp1.end())
        mp1[arr[i]] = 1;
    }
}

if(mp1.find(arr[n-1]) == mp1.end())
mp1[arr[n-1]] = 1;

long long freqb = 1;
for(int i=0; i<n-1; i++){
    if(brr[i] == brr[i+1]){
        freqb++;
        if(mp2.find(brr[i]) != mp2.end())
        mp2[brr[i]] = max(mp2[brr[i]], freqb);
        else
        mp2[brr[i]] = 2;
    }
    else{
        freqb = 1;
        if(mp2.find(brr[i]) == mp2.end())
        mp2[brr[i]] = 1;
    }
}

if(mp2.find(brr[n-1]) == mp2.end())
mp2[brr[n-1]] = 1;

long long ans = 1;
for(auto it: mp1){
    if(mp2.find(it.first) != mp2.end())
    ans = max(ans, (it.second + mp2[it.first]));
    else{
        ans = max(ans, it.second);
    }
}

for(auto it: mp2){
    ans = max(ans, it.second);
}

cout<<ans<<endl;
}
}