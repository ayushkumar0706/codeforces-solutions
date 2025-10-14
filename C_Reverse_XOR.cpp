#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

string toBinary(int n)
{
    if (n == 0)
        return "0";
    string res = "";
    while (n > 0)
    {   if(n%2)
        res += '1';
        else
        res += '0';

        n /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

bool isPalindrome(string &temp)
{
    string rev = temp;
    reverse(rev.begin(), rev.end());
    return temp == rev;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string temp = toBinary(n);

        while(temp.back() == '0')
        temp.pop_back();


        int m = temp.size();
        if(isPalindrome(temp)){
            if((m%2) == 0)
            cout<<"YES"<<endl;
            else{
                if(temp[m/2] == '0')
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}