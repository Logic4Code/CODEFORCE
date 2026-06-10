#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a[4];
        vector<int> b;
        for (int i = 0; i < 4; i++) {
            cin >> a[i];
            b.push_back(a[i]);
        }

        sort(b.begin(), b.end());

        int winner1 = max(a[0], a[1]);
        int winner2 = max(a[2], a[3]);

        if (min(winner1, winner2) == b[2] && max(winner1, winner2) == b[3]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}