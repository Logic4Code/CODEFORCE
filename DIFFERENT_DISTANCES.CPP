#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    while (x--) {
        int len;
        cin >> len;

        for (int idx = 1; idx <= len; ++idx) {
            cout << idx << " ";
        }

        vector<int> arr(len);
        for (int pos = 0; pos < len; ++pos) {
            arr[pos] = len - pos;
        }

        if (len % 2 != 0) {
            int midPos = len / 2;
            int tempVal = arr[midPos - 1];
            arr[midPos - 1] = arr[midPos];
            arr[midPos] = tempVal;
        }

        for (int pos = 0; pos < len; ++pos) {
            cout << arr[pos] << " ";
        }

        for (int idx = 1; idx <= len; ++idx) {
            cout << idx << " ";
        }

        for (int idx = 1; idx <= len; ++idx) {
            cout << idx << " ";
        }

        cout << "\n";
    }

    return 0;
}