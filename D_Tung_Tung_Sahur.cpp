#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
string p, s;
cin>>p>>s;

int n = p.size();
int m = s.size();

if(m>2*n || m<n){
    cout<<"NO"<<endl;
    continue;
}

int cnt = 0;
int a = 0, b = 0;

for(int i=0;i<n;i++){
    int left=i, right=i;
    char c = p[left];

    while (p[right] == c && right<p.size())
        right++;

    right--;

    i = right;

    int len1 = right-left+1;
    if (p[left] != p[a])
    {
        cnt = 1;
        break; 
    }

    c = s[a];
    while (s[b]==c && b<s.size())
        b++;
        
    int len2 = b-a;
    a = b;
    if (len1>len2 || len2>2*len1)
    {
        cnt = 1;
        break;
    }
}
if(b<p.size() || cnt == 1)
cout<<"NO"<<endl;
else
cout<<"YES"<<endl;
    
}
}