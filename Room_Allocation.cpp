#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n;
cin>>n;
vector<pair<int, int>>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i].first>>arr[i].second;
}

set<pair<int, int>>st;
vector<int>room_no(n, 1);
vector<int>idx(n);

iota(idx.begin(), idx.end(), 0);
sort(idx.begin(), idx.end(), [&](int i, int j){
    if(arr[i].first == arr[j].first)
    return arr[i].second < arr[j].second;
    return arr[i].first < arr[j].first;
});

st.insert({arr[idx[0]].second, 1});
room_no[idx[0]] = 1;
int cnt = 1;
for(int i=1; i<n; i++){
    int mini = st.begin()->first;
    int room = st.begin()->second;

    if(arr[idx[i]].first > mini){
        room_no[idx[i]] = room;
        st.erase({mini, room});
        st.insert({arr[idx[i]].second, room});
    }else{
        cnt++;
        room_no[idx[i]] = cnt;
        st.insert({arr[idx[i]].second, cnt});
    }
}

cout<<cnt<<endl;
for(auto it: room_no){
    cout<<it<<" ";
}

}