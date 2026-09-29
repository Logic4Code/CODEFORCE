#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int idx = 0; idx < n; idx++) {
            cin >> a[idx];
        }

        ll ans = 0;
        int x = 0;
        int i = k - 1;
        int j = n - k;

        while (n - x >= k) {
            if (i == j) {
                ans += a[i];
                j = k - 2;
                i = n + 1 - k;
                x++;
                continue;
            }

            if (a[i] > a[j]) {
                ans += a[i];
                i++;
                if (i > j) {
                    j--;
                }
            } else if (a[i] < a[j]) {
                ans += a[j];
                j--;
                if (i > j) {
                    i++;
                }
            } else {
                if (i + 1 < n && j - 1 >= 0 && a[i + 1] == a[j - 1]) {
                    ans += a[i] + a[i];
                    i++;
                    j--;
                    x++;
                } else if (i + 1 < n && j - 1 >= 0 && a[i + 1] > a[j - 1]) {
                    ans += a[i];
                    i++;
                    if (i > j) {
                        j--;
                    }
                } else {
                    ans += a[j];
                    j--;
                    if (i > j) {
                        i++;
                    }
                }
            }
            x++;
        }

        cout << ans << '\n';
    }
    return 0;
}