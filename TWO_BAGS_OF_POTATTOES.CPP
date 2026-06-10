#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long y, k, n;
   cin >> y >> k >> n;
long long x = ((y / k) + 1) * k - y;

bool ans = false;

    while (x + y <= n) {
        cout << x << " ";
        ans = true;
        x += k;
    }

    if (!ans) {
        cout << -1;
    }
}