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
    string s;
    cin >> s;

    vector<long long> p;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '*') {
            p.push_back(i);
        }
    }

    int k = p.size();
    if (k <= 1) {
        cout << 0 << "\n";
    }
    else{
    vector<long long> a(k);
    for (int i = 0; i < k; ++i) {
        a[i] = p[i] - i;
    }
    long long m = a[k / 2];
    long long ans = 0;

    for (int i = 0; i < k; ++i) {
        ans += abs(a[i] - m);
    }

    cout << ans << "\n";
}
    }
    return 0;
}