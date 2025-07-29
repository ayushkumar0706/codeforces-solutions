#include<bits/stdc++.h>
using namespace std;

bool check(long long n, long long x){
    while(n||x){
        if((x&1) == 0 && (n&1) == 1){
            // cout<<"boom";
            return false;
        }
        n>>=1;x>>=1;
        // cout<<"n: "<<n<<" x: "<<x<<" ";
    }

    return true;
}

int main()
{
int t;
cin>>t;
while(t--){
long long n,x;
cin>>n>>x;
vector<long long>arr(n),brr(n),crr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
cin>>brr[i];
}
for(int i=0;i<n;i++){
cin>>crr[i];
}

if(x == 0){
    cout<<"Yes"<<endl;
    continue;
}

int i=0, j=0, k=0;
long long num = 0;
int cnta = 1, cntb = 1, cntc = 1;
while((num < x) && (cnta||cntb||cntc)){
    if(cnta && i<n && check(arr[i], x)){
        num|=arr[i];
        i++;
    }
    else{
        cnta = 0;
    }
    if(cntb && j<n && check(brr[j], x)){
        num|=brr[j];
        j++;
    }
    else{
        cntb = 0;
    }
    if(cntc && k<n && check(crr[k], x)){
        num|=crr[k];
        k++;
    }
    else{
        cntc = 0;
    }
}

// cout<<num<<" ";

if(num == x)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
    
}
}