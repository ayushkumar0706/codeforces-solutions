#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

struct Pair {
    int i, j;
};

signed main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    unordered_map<int, vector<Pair>> mp;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int sum = arr[i] + arr[j];
            int need = k - sum;

            if(mp.count(need)){
                for(auto &p : mp[need]){
                    if(p.i != i && p.i != j && p.j != i && p.j != j){
                        cout << p.i + 1 << " " << p.j + 1 << " " 
                             << i + 1 << " " << j + 1 << endl;
                        return 0;
                    }
                }
            }
            mp[sum].push_back({i, j});
        }
    }

    cout << "IMPOSSIBLE" << endl;
}
