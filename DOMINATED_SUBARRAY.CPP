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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans = n + 1;
        map<int, int> m;
        for (int i = 0; i < n; i++) {
            int val = a[i];
            if (m.count(val)) {
                int x = i - m[val] + 1;
                ans = min(ans, x);
            }
            m[val] = i;
        }

        if (ans == n + 1) {
            cout << -1 << "\n";
        } else {
            cout << ans << "\n";
        }
}
}