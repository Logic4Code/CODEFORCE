#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int r0 = 0, r1 = 0, r2 = 0;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        int sum = 0;
        for (char ch : s) {
            sum += (ch - '0');
        }
        int rem = sum % 3;

        if (rem == 0) {
            r0++;
        } else if (rem == 1) {
            r1++;
        } else {
            r2++;
        }
    }
    cout << (r0 / 2) + min(r1, r2);
}