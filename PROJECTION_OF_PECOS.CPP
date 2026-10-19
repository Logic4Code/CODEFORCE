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
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    long long c = 2 * a[n - 1];

    for (int i = n - 2; i >= 0; --i) {
        long long diff = abs(c - a[i]);
        if (c - a[i] < 0) {
            c = a[i] + diff;
        } else {
            c = a[i] - diff;
        }
    }
    cout <<  c / 2 << "\n"; 
    }
    return 0;
}