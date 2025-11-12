#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int INF = 1e18;

void dfs(int curr, vector<vector<int>> &edges, vector<bool> &vist, vector<int> &topo)
{
    vist[curr] = true;
    for (int e : edges[curr])
    {
        if (!vist[e])
        {
            dfs(e, edges, vist, topo);
        }
    }
    topo.push_back(curr);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> edges(n, vector<int>());
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        edges[u].push_back(v);
    }

    vector<bool> visited(n, false);
    vector<int> topo;
    dfs(0, edges, visited, topo);
    reverse(topo.begin(), topo.end());

    vector<int> dist(n, -INF);
    vector<int> parent(n, -1);
    dist[0] = 0;

    for (int i = 0; i < topo.size(); i++)
    {
        int x = topo[i];
        for (auto it : edges[x])
        {
            if (dist[it] < (dist[x] + 1))
            {
                dist[it] = 1 + dist[x];
                parent[it] = x;
            }
        }
    }
    if (dist[n - 1] < 0)
    {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    int curr = n - 1;
    vector<int> ans;
    while (curr != -1)
    {
        ans.push_back(curr + 1);
        curr = parent[curr];
    }

    reverse(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}