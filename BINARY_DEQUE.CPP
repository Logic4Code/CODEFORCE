#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
  int n, s;
    cin >> n >> s;
    vector<int> a(n);
    int c = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        c += a[i];
    }

    if (c < s) {
        cout << -1 << "\n";
    }
  else if (c == s) {
        cout << 0 << "\n";
    }
else{
    int p = 0, b = 0, l = -1;

    for (int right = 0; right < n; right++) {
        b += a[right];

        while (b > s && p <= right) {
            b -= a[p];
            p++;
        }

        if (b == s) {
            l = max(l, right - p + 1);
        }
    }

    if (l == -1) {
        cout << -1 << "\n";
    } else {
        cout << n - l << "\n";
    }
}
    }
}