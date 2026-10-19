#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
 int n;
    cin >> n;

    int o = 0;
    long long s = 0;

    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;
        s += a;
        if (a % 2 != 0) {
            o++;
        }
    }

    if (s % 2 == 0) {
        cout << "Moggity"<<endl;
    }
    else if (n == 2 || (n == 3 && o == 3)) {
        cout << "Larpity"<<endl;
    } else {
        cout << "Moggity"<<endl;
    }
    }
    return 0;
}