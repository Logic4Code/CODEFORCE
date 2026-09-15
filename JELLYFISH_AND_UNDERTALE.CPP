#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
    long long a, b;
    int n;
    cin >> a >> b >> n;

    vector<long long> x(n);
    for (int i = 0; i < n; ++i) cin >> x[i];

    sort(x.begin(), x.end());

    long long ans = 0;
    long long c = b;

    for (int i = 0; i < n; ++i) {
        ans += (c - 1);
        c = 1;
        c = min(a, c + x[i]);
    }

    ans += c;

    cout << ans << "\n";
    }
    return 0;
}