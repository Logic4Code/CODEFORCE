
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
int n, c;
    cin >> n >> c;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    long long ans1 = 0;
    int x = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            x ++;
            break;
        }
        ans1 += (a[i] - b[i]);
    }

    vector<int> a2 = a;
    vector<int> b2 = b;
    sort(a2.begin(), a2.end());
    sort(b2.begin(), b2.end());

    long long ans2 = c;
    int y = 0;
    for (int i = 0; i < n; i++) {
        if (a2[i] < b2[i]) {
            y++;
            break;
        }
        ans2 += (a2[i] - b2[i]);
    }

    if (y>0) {
        cout << -1 << endl;
    } else if (x>0) {
        cout << ans2 << endl;
    } else {
        cout << min(ans1, ans2) << endl;
    }
}
}