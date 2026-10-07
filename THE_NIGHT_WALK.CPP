#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
  long long n, l, d;
    cin >> n >> l >> d;

    vector<long long> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    long long ans = d / (2 * l) * (2 * n);

    long long y = d % (2 * l);

    long long s = 0;
    for (int i = 0; i < n; i++) {
        if (y <= l) {
            if (x[i] <= y) {
                s++;
            }
        } else {
            s++;
            if (x[i] >= 2 * l - y) {
                s++;
            }
        }
    }

    cout << ans + s << "\n";
}
        
}