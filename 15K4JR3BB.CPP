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
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        int p;
        cin >> p;
        a[i] = pow(2,p);
    }

    sort(a.rbegin(), a.rend());

    long long s1 = 0, s2 = 0;
    for (long long v : a) {
        if (s1 <= s2) {
            s1 += v;
        } else {
            s2 += v;
        }
    }

     long long ans = s1 * s2;
    cout << ans << "\n";
    }
    return 0;
}