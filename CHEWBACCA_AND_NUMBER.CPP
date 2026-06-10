#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;

    for (int i = 0; i < x.size(); i++) {
        int digit = x[i] - '0';

        if (digit >= 5) {
            int b = 9 - digit;

            if (i == 0 && b == 0) {
                continue;
            }
            x[i] = b + '0';
        }
    }

    cout << x << endl;
}
