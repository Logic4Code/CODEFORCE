#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
     int n;
     cin>>n;
      vector<long long> a(n);
      for (int i = 0; i < n; i++) {
      cin >> a[i];
      }
        sort(a.begin(), a.end());

    long long ans = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            long long s = a[i] + a[j];
            if (j < n - 1 && s > a[n - 1]) {
                ans++;
            }
            if (j + 1 <= n - 2) {
                long long x = a[n - 1] - s;
                long long y = s;

                auto p = upper_bound(a.begin() + (j + 1), a.begin() + (n - 1), x);

                auto q = lower_bound(a.begin() + (j + 1), a.begin() + (n - 1), y);

                if (p < q) {
                    ans += (q - p);
                }
            }
        }
    }

    cout << ans << "\n";
}
}