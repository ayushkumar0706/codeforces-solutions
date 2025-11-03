#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int x[4] = {0, 0, -1, 1};
int y[4] = {-1, 1, 0, 0};
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int row, col;
    vector<vector<char>> mat(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 'A')
            {
                row = i;
                col = j;
            }
        }
    }

    queue<pair<int, int>> q;
    vector<vector<int>> vist(n, vector<int>(m, -1));
    vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>>(m, {-1, -1}));

    q.push({row, col});
    vist[row][col] = 0;

    while (!q.empty())
    {
        auto top = q.front();
        q.pop();
        int i = top.first;
        int j = top.second;

        for (int k = 0; k < 4; k++)
        {
            if (((i + x[k]) >= 0) && ((i + x[k]) < n) && ((j + y[k]) >= 0) && (j + y[k]) < m)
            {
                if ((mat[i + x[k]][j + y[k]] == '.') && (vist[i + x[k]][j + y[k]] == -1))
                {
                    vist[i + x[k]][j + y[k]] = 1 + vist[i][j];
                    parent[i + x[k]][j + y[k]] = {i, j};
                    q.push({(i + x[k]), (j + y[k])});
                }
            }
        }
    }

    vector<vector<int>> vist_B(n, vector<int>(m, -1));
    q.empty();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 'M')
            {
                q.push({i, j});
                vist_B[i][j] = 0;
            }
        }
    }

    while (!q.empty())
    {
        auto it = q.front();
        int r = it.first;
        int c = it.second;
        q.pop();

        for (int k = 0; k < 4; k++)
        {
            int ni = r + x[k], nj = c + y[k];
            if ((ni < 0) || (ni >= n) || (nj < 0) || (nj >= m) || (mat[ni][nj] == '#'))
            continue;
            if((vist_B[ni][nj] == -1) || (vist_B[ni][nj] > (1 + vist_B[r][c]))){
                vist_B[ni][nj] = 1 + vist_B[r][c];
                q.push({ni, nj});
            }
        }
    }

    int rowb = -1, colb = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((i == 0) || (i == n - 1)|| (j == 0) || (j == m - 1))
            {
                if (vist[i][j] != -1)
                {
                    if((vist_B[i][j] == -1) || (vist_B[i][j] > vist[i][j])){
                        rowb = i;
                        colb = j;
                        break;
                    }
                }
            }
        }
        if ((rowb != -1) && (colb != -1))
            break;
    }

    if ((rowb == -1) && (colb == -1))
    {
        cout << "NO" << endl;
        return 0;
    }

    vector<pair<int, int>> ans;
    while (true)
    {
        ans.push_back({rowb, colb});
        if ((rowb == row) && (colb == col))
            break;
        auto k = parent[rowb][colb];
        rowb = k.first;
        colb = k.second;
    }

    cout << "YES" << endl;
    int k = ans.size();
    cout << k - 1 << endl;
    reverse(ans.begin(), ans.end());

    string path;
    for (int i = 1; i < k; i++)
    {
        int dx = ans[i].first - ans[i - 1].first;
        int dy = ans[i].second - ans[i - 1].second;

        if (dx == -1 && dy == 0)
            path += 'U';
        else if (dx == 1 && dy == 0)
            path += 'D';
        else if (dx == 0 && dy == -1)
            path += 'L';
        else if (dx == 0 && dy == 1)
            path += 'R';
    }
    cout << path << endl;
}