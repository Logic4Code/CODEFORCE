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
    
    vector<int> a(n + 1, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x <= n) {
            a[x]++;
        }
    }
    
    vector<int> b(n + 1, 0);
    for (int j = 1; j <= n; j++) {
        if (a[j] == 0) continue;
        for (int i = j; i <= n; i += j) {
            b[i] += a[j];
        }
    }
    
    int ans = 0;
    for (int x = 1; x <= n; x++) {
        ans = max(ans, b[x]);
    }
    
    cout << ans << "\n";
    }
    return 0;
}