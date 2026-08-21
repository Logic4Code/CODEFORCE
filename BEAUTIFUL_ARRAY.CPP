#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
    long long n, k, b, s;
    cin >> n >> k >> b >> s;

    long long x = k * b;
    long long y = n * (k - 1);
    
    if (s < x || s - x > y) {
        cout << -1 << "\n";
    }
else{
    vector<long long> a(n, 0);
    a[0] = x;
    long long p = s - x;

    for (int i = 0; i < n; ++i) {
        long long q = min(p, k - 1);
        a[i] += q;
        p -= q;
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << "\n";
}
        
    }
    return 0;
}