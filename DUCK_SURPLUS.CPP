#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long c = a[0];
        long long ans = c;

        for (int i = 1; i < n; i++) {
            if (a[i] >= c) {
                c = a[i];
            } else {
                c += a[i];
            }
            ans = max(ans, c);
        }

        cout << ans << endl;
    }

}