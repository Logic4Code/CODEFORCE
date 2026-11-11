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
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i; 
    }
    
    vector<pair<int, int>> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i].first;
        b[i].second = i;
    }
    
    sort(b.begin(), b.end());
    
    for (int i = n - 2; i >= 0; i--) {
        b[i].second = min(b[i].second, b[i + 1].second);
    }
    
    int ans = 2 * n;
    
    for (int i = 0; i < n; i++) {
        auto it = upper_bound(b.begin(), b.end(), make_pair( a[i].first, n));
        
        if (it != b.end()) {
            ans = min(ans, a[i].second + it->second);
        }
    }
    
    cout << ans << "\n";
}
}