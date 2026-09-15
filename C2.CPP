#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
long long x, y, k;
    cin >> x >> y >> k;

    long long z = y - x;
    long long ans = 0;

    long long j = 0;
    if (z >= x) {
        j = min(k, z - x + 1);
    }

    for (long long i = 0; i < j; ++i) {
        ans += (y + i) % (x + i);
    }

    long long m = k - j;
    if (m > 0) {
        ans += m * z;
    }

    cout << ans << "\n";
    }
    return 0;
}