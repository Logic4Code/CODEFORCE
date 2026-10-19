#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
     int n;
    cin >> n;
    vector<long long> f(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> f[i];
    }

    vector<long long> a(n + 1, 0);

    for (int k = 2; k <= n - 1; ++k) {
        a[k] = (f[k + 1] - 2 * f[k] + f[k - 1]) / 2;
    }

    long long s = 0;
    long long e = 0;
    for (int i = 2; i <= n - 1; ++i) {
        s += (long long)(i - 1) * a[i];
        e += (long long)(n - i) * a[i];
    }

    a[n] = (f[1] - s) / (n - 1);
    a[1] = (f[n] - e) / (n - 1);

    for (int i = 1; i <= n; ++i) {
        cout << a[i] << (i == n ? "" : " ");
    }
    cout << endl;
    }
    return 0;
}