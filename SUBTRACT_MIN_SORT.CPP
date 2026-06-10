#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
  int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool ans = true;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            ans = false;
            break;
        }
        a[i + 1] -= a[i];
        a[i] = 0;
    }

    if (ans) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
}