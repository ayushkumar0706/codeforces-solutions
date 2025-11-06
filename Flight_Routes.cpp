#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = (ll)4e18;

void Dijkstra(int src, vector<vector<pair<int, ll>>> &edges, vector<priority_queue<ll>> &dist)
{
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    dist[src].push(0);
    dist[src].pop();
    pq.push({0, src});

    while (!pq.empty())
    {
        auto top = pq.top();
        pq.pop();
        ll len = top.first;
        int curr = top.second;
        if (len > dist[curr].top())
            continue;
        for (auto it : edges[curr])
        {
            int node = it.first;
            ll w = it.second;

            ll el = dist[node].top();
            if (el > (len + w))
            {
                dist[node].pop();
                dist[node].push(len + w);
                pq.push({len + w, node});
            }
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<pair<int, ll>>> edges(n, vector<pair<int, ll>>());
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        u--;
        v--;
        edges[u].push_back({v, w});
    }

    vector<priority_queue<ll>> dist(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            dist[i].push(INF);
        }
    }

    Dijkstra(0, edges, dist);

    vector<ll> ans;
    while (dist[n - 1].size())
    {
        ll top = dist[n - 1].top();
        dist[n - 1].pop();
        ans.push_back(top);
    }

    reverse(ans.begin(), ans.end());
    for (auto it : ans)
    {
        cout << it << " ";
    }

    cout << endl;
}