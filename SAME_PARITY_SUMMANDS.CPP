#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long a = n - (k - 1);
        if (a > 0 && a % 2 != 0) {
            cout << "YES" << endl;
            for (int i = 0; i < k - 1; ++i) cout << "1 ";
            cout << a << endl;
            continue;
        }

        long long b = n - 2 * (k - 1);
        if (b > 0 && b % 2 == 0) {
            cout << "YES" << endl;
            for (int i = 0; i < k - 1; ++i) cout << "2 ";
            cout << b << endl;
            continue; 
        }
        cout << "NO" << endl;
    }
}