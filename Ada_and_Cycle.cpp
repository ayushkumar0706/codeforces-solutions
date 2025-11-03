#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    cin>>n;
    vector<vector<int>>edges(n, vector<int>());
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int m;
            cin>>m;
            if(m == 1)
            edges[i].push_back(j); 
        }
    }

    
    for(int i=0; i<n; i++){
        queue<int>q;
        q.push(i);
        
        vector<int>parent(n, -1);
        int cnt = -1;
        while(!q.empty()){
            int top = q.front();
            q.pop();
            for(int e: edges[top]){
                if(e == i){
                    cnt = top;
                    break;
                }
                if(parent[e] != -1) continue;
                q.push(e);
                parent[e] = top;  
            }
            if(cnt != -1)
            break;
        }

        if(cnt == -1){
            cout<<"NO WAY"<<endl;
            continue;
        }

        int len = 1;
        while(cnt != i){
            len++;
            cnt = parent[cnt];
        }

        cout<<len<<endl;
    }

}