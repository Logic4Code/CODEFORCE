#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
int n, q;
    cin >> n >> q;

    vector<long long> p(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        long long x;
        cin >> x;
        p[i] = p[i - 1] + x;
    }

    while (q--) {
        long long l, r, k;
        cin >> l >> r >> k;

        long long a = p[r] - p[l - 1];
        long long b = (r - l + 1) * k;
        long long ans = p[n] - a + b;

        cout << (ans % 2 != 0 ? "YES\n" : "NO\n");
    } 
    }
    return 0;
}