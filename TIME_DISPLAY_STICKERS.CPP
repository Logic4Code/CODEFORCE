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
     string s;
      cin>>s;
vector<int> cnt(10, 0);
    for (char c : s) {
        cnt[c - '0']++;
    }

    int c0 = cnt[0];
    int c1 = cnt[1];
    int c25 = cnt[2] + cnt[3] + cnt[4] + cnt[5];
    int c05 = c0 + c1 + c25;

    int ans = n / 4;
    ans = min(ans, c0 + c1 / 2);
    ans = min(ans, c05 / 2);
    ans = min(ans, (c05 + c0) / 3);

    cout << ans << "\n";
    }
}