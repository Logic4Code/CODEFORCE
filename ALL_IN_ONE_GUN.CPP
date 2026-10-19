#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
    int n;
    long long k, h;
   cin >> n >> h >> k;

    vector<long long> a(n);
    long long s = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        s += a[i];
    }

    long long c = (h ) / s;
    long long rem = h%s;
if (rem == 0) {
            cout << c * n + (c - 1) * k << "\n";
     }
     else{
    vector<long long> mini(n);
    vector<long long> pr(n);

    pr[0] = a[0];
    mini[0] = a[0];
    for (int i = 1; i < n; ++i) {
        pr[i] = pr[i - 1] + a[i];
        mini[i] = min(mini[i - 1], a[i]);
    }

    vector<long long> maxi(n);
    maxi[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        maxi[i] = max(maxi[i + 1], a[i]);
    }
        long long x = n;
    for (int i = 0; i < n; ++i) {
        long long y = pr[i];

        if (i + 1 < n) {
            long long g = maxi[i + 1] - mini[i];
            if (g > 0) {
                y += g;
            }
        }

        if (y >= rem) {
            x = i + 1; 
            break;
        }
    }

    cout << c * (n+ k) + x << "\n";
}
    }
}