#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
long long n;
  cin >> n;

    long long x = 1;
    for (long long p = 2; p * p <= n; ++p) {
        if (n % p == 0) {
            x = n / p;
            break;
        }
    }

  cout << x << " " << n - x << "\n";
    }
    return 0;
}