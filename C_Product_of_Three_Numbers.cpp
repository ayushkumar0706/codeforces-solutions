#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int num = n;
  vector<int> factors;
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) factors.push_back(n);

    if(factors.size() < 3){
        cout<<"NO"<<endl;
        continue;
    }

    int a = factors[0],b,c;
    if(factors[1] != a)
    b = factors[1];
    else
    b = factors[1]*factors[2];

    c = num / (a*b);

    if((a != c) && (b != c) && (c != 1)){
        cout<<"YES"<<endl;
        cout<<a<<" "<<b<<" "<<c<<endl;
        continue;
    }

    cout<<"NO"<<endl;

}
}