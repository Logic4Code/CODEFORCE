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
vector<int> a(10, 0);
    for (char c : s) {
        a[c - '0']++;
    }

    int ans = 0;

    while (true) {
        int c01 = a[0] + a[1];
        if (c01 < 2) {
            break; 
        }
        
        for (int i = 0; i < 2; i++) {
            if (a[1] > 0) a[1]--;
            else a[0]--;
        }
        bool v = false;
        for (int d = 5; d >= 0; d--) {
            if (a[d] > 0) {
                a[d]--;
                v = true;
                break;
            }
        }
        if (!v) {
            break; 
        }

        bool u = false;
        for (int d = 9; d >= 0; d--) {
            if (a[d] > 0) {
                a[d]--;
                u = true;
                break;
            }
        }
        if (!u) {
            break; 
        }

        ans++;
    }

    cout << ans << "\n";
}
}