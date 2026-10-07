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
      vector<long long> a(n);
      for (int i = 0; i < n; i++) {
      cin >> a[i];
      }
int x = 0;
    while (x < n && a[x] == a[0]) {
        x++;
    }

    int y = 0;
    while (y < n && a[n - 1 - y] == a[n - 1]) {
        y++;
    }
    if (x == n) {
        cout << 0 << endl;
    }
    else if (a[0] == a[n - 1]) {
        cout << n - (x + y) << endl;
    } else {
        cout << n - max(x, y) << endl;
    }
        
    }
    return 0;
}