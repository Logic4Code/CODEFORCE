#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
 string s;
    cin >> s;
    int n = s.length();
    vector<string> targets = {"00", "25", "50", "75"};
    int ans = n; 

    for (const string& t : targets) {
        int j = -1, i = -1;
                for (int k = n - 1; k >= 0; --k) {
            if (s[k] == t[1]) {
                j = k;
                break;
            }
        }
        if (j == -1) continue;
        for (int k = j - 1; k >= 0; --k) {
            if (s[k] == t[0]) {
                i = k;
                break;
            }
        }
        if (i == -1) continue;

        ans = min(ans, (n - 2) - i);
    }

    cout << ans << "\n";
    }
    return 0;
}