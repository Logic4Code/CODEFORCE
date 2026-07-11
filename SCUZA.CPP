#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
    int n, q;
    cin >> n >> q;
    vector<long long> a(n);
    vector<long long> ps(n);
    long long s = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
        ps[i] = s; 
    }
    vector<pair<long long, int>> b(q);
    for (int i = 0; i < q; i++) {
        cin >> b[i].first;
        b[i].second = i; 
    }
    sort(b.begin(), b.end());
    vector<long long> ans(q);
    int j = 0; 
    for (int i = 0; i < q; i++) {
        while (j < n && a[j] <= b[i].first) {
            j++;
        }
        if (j == 0) {
            ans[ b[i].second] = 0;
        } else {
            ans[ b[i].second] = ps[j - 1];
        }
    }
    for (int i = 0; i < q; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}
}