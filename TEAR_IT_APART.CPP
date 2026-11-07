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
    string x = s;
    sort(x.begin(), x.end());
    x.erase(unique(x.begin(), x.end()), x.end());

    int ans = s.size();

    for (char c : x) {
        string cur = s;
        int y = 0;
        while (count(cur.begin(), cur.end(), c) != cur.size()) {
            string p = "";
            bool z = false;

            for (int i = 0; i < cur.size(); ++i) {
                if (cur[i] != c && !z) {
                    z = true;
                } else {
                    p += cur[i];
                    z = false;
                }
            }
            cur = p;
            y++;
        }

        ans = min(ans, y);
    }

    cout << ans << "\n";
    }
    return 0;
}