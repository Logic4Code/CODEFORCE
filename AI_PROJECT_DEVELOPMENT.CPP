#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
long long n, x, y, z;
    cin >> n >> x >> y >> z;

    long long t1 = (n + x + y - 1) / (x + y);

    long long t2;
    if (z * x >= n) {
        t2 = (n + x - 1) / x;
    } else {
        long long t3 = (n - (z * x) + x + 10 * y - 1) / (x + 10 * y);
        t2 = z + t3;
    }
    cout << min(t1, t2) <<endl;
}
}