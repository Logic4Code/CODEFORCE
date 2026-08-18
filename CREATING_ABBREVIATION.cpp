#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
     int n, m;
    cin >> n >> m;

    vector<bool> x(26, false);

    for (int i = 0; i < n; ++i) {
        string a;
        cin >> a;
        x[a[0] - 'a'] = true;
    }

    bool ans = true;
    for (int i = 0; i < m; ++i) {
        string y;
        cin >> y;
        for (char c : y) {
            if (!x[tolower(c) - 'a']) {
                ans = false;
            }
        }
    }

    if (ans) {
        cout << "YES"<<"\n";
    } else {
        cout << "NO"<<"\n";
    }
        
    }
    return 0;
}