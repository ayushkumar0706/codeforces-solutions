#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n, k;
cin>>n>>k;
    
        string result;
        if (k == n) {
            result = string(n, '1');  
        } else { 
            result += string(k, '1');         
            result += string(n - k, '0');  
        }
        cout << result << endl;
}
}