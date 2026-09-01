#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
      long long n, m;
    cin >> n >> m;

    long long temp = n;
    int c2 = 0, c5 = 0;

    while (temp > 0 && temp % 2 == 0) {
        c2++;
        temp /= 2;
    }

    while (temp > 0 && temp % 5 == 0) {
        c5++;
        temp /= 5;
    }

    long long k = 1;
    while (c2 < c5 && k * 2 <= m) {
        c2++;
        k *= 2;
    }
    while (c5 < c2 && k * 5 <= m) {
        c5++;
        k *= 5;
    }
    while (k * 10 <= m) {
        k *= 10;
    }
    if (k == 1) {
        cout << n * m << "\n";
    } else {
        k *= (m / k);
        cout << n * k << "\n";
    }
}
        
    }