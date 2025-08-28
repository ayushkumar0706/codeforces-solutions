#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

int fir = 0, sec = n-1, del1 = -1, del2 = -1;
while(fir <= sec){
    if(arr[fir] != arr[sec]){
        del1 = arr[fir];
        del2 = arr[sec];
        break;
    }
    fir++;
    sec--;
}

if(del1 == -1 && del2 == -1){
    cout<<"YES"<<endl;
    continue;
}

int cnt = 0;
fir = 0, sec = n-1;
while(fir <= sec){
    if(arr[fir] != del1 && arr[sec] != del1){
        if(arr[fir] != arr[sec]){
            cnt = 1;
            break;
        }
        fir++;
        sec--;
    }
    else{
        if(arr[fir] == del1)
        fir++;
        else sec--;
    }
}

if(cnt == 0){
    cout<<"YES"<<endl;
    continue;
}

fir = 0, sec = n-1, cnt = 0;
while(fir <= sec){
    if(arr[fir] != del2 && arr[sec] != del2){
        if(arr[fir] != arr[sec]){
            cnt = 1;
            break;
        }
        fir++;
        sec--;
    }
    else{
        if(arr[fir] == del2)
        fir++;
        else sec--;
    }
}

if(cnt){
    cout<<"NO"<<endl;
}
else cout<<"YES"<<endl;
    
}
}