#include<bits/stdc++.h>
using namespace std;

vector<string>gen = {"1869", "1968", "6918", "6198", "8691", "1986", "1896"};

bool check(string &s){
    int mod = 0;
    for(auto it: s){
        mod = (mod*10 + (it-'0')) % 7;
    }

    return mod == 0;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;

vector<int>digit(10, 0);
for(auto it: s){
    digit[it-'0']++;
}

digit[1]--;
digit[6]--;
digit[8]--;
digit[9]--;

string t = "";
for(int i=1; i<10; i++){
    t = t + string(digit[i], (i+'0'));
}

t = t + string(digit[0], '0');

int cnt = 0;
string ans;
for(int i=0; i<7; i++){
    ans = gen[i] + t;
    if(check(ans)){
        cnt = 1;
        break;
    }
}

if(cnt == 0)
cout<<"0"<<endl;
else
cout<<ans<<endl;

}