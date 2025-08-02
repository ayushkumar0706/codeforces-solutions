#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 1;
vector<bool> is_prime(MAX, true);
set<long long> t_primes;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    is_prime[0] = is_prime[1] = false;
    for (int i=2; i<MAX; i++) {
        if (is_prime[i]) {
            t_primes.insert(1LL * i * i); 
            for (int j=i*2; j<=MAX; j+=i)
                is_prime[j] = false;
        }
    }

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (t_primes.count(n))
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
}
