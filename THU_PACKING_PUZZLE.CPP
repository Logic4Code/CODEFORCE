#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long x, y, z;
    cin >> x >> y >> z;
   long long n = 0;

    long long tu = min(x, z);
    n += 4 * tu;
    x -= tu;
    z -= tu;

    long long tht = min(y, x / 2);
    n += 7 * tht;
    x -= 2 * tht;
    y -= tht;

    if (x > 0 && y > 0) {
        n += 5;
        x -= 1;
        y -= 1;
    }

    if (x > 0) {
        n += 2 * x + 1;
        x = 0;
    }

    n += 3 * (z + y);

     cout<<n<<endl;
    }
    return 0;
}