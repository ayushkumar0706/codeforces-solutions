#include <bits/stdc++.h>
using namespace std;

int maxi = 1001;
vector<bool> isprime(maxi, 1);
void sieve()
{
    for (int i = 2; i * i <= maxi; i++)
    {
        if (isprime[i])
        {
            for (int j = i * i; j <= maxi; j += i)
                isprime[j] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, k;
    cin >> n >> k;

    sieve();

    int curr = 5;
    int ans = 0;
    for (int i = 7; i < n; i++)
    {
        if (isprime[i])
        {
            if (curr + i + 1 <= n && isprime[curr + i + 1])
                ans++;
            curr = i;
        }
    }

    cout << (ans >= k ? "YES" : "NO") << endl;
}