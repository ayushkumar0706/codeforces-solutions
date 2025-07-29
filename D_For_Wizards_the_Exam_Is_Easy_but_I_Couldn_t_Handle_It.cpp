#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin >> t;    
while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 1, r = 1, maxi = 0;
    for (int i = 0; i < n; i++) {
    int cnt = 0;
    for (int j = i + 1; j < n; j++) {
        if (a[j] < a[i]) {
            cnt++;
        } else if (a[j] > a[i]) {
             cnt--;
        }
        if (cnt > maxi) {
            maxi = cnt;
            l = i + 1;
            r = j + 1;
        }
        }
    }
        cout << l << " " << r << endl;
}

}