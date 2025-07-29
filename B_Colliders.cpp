#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long n, m;
cin>>n>>m;
vector<pair<char, int>> requests(m);

for (int i = 0; i < m; ++i) {
    cin >> requests[i].first >> requests[i].second;
}

vector<bool>v(n+1, 0);
vector<int>factors(n+1, 0);
vector<int>fact;

for(int i=0; i<m; i++){
    long long num = requests[i].second;
    if(requests[i].first == '+'){
        if(v[num] == 1){
            cout<<"Already on"<<endl;
        }
        else{
            int cnt = 0,j = 0;
            for(int k=2; k*k<=num; k++){
                if(num%k == 0){
                    if(factors[k] || factors[num/k]){
                        cnt = 1;
                        if(factors[k])
                        j = factors[k];
                        else j = factors[num/k];
                        break;
                    }
                    else{
                        fact.push_back(k);
                        fact.push_back(num/k);
                    }
                }
            }

            if(cnt == 0 && factors[num]){
                cnt = 1;
                j = factors[num];
            }

            if(cnt == 0){
                cout<<"Success"<<endl;
                v[num] = 1;
                fact.push_back(num);
                for(auto it: fact){
                    factors[it] = num;
                }
            }
            else{
                cout<<"Conflict with "<<j<<endl;
            }
            fact.clear();
        }
    }
    else{
        if(v[num] == 0){
            cout<<"Already off"<<endl;
        }
        else {
            v[num] = 0;
            cout<<"Success"<<endl;
            for(int k=2; k*k<=num; k++){
                if(num%k == 0){
                    factors[k] = 0;
                    factors[num/k] = 0;
                }
            }
            factors[num] = 0;
        }
    }
}
}