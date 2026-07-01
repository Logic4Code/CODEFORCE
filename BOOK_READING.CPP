#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
long long n, m;
    cin >> n >> m;

    long long x = n / m;
    if (x == 0) {
        cout << 0 << "\n";
    }
else{
    vector<long long> a(10);
    long long s = 0;
    for (int i = 1; i <= 10; ++i) {
        a[i - 1] = (m * i) % 10;
        s += a[i - 1];
    }

    long long p = x / 10;
    long long r = x % 10;

    long long ans = p * s;

    for (int i = 0; i < r; ++i) {
        ans += a[i];
    }

    cout << ans << "\n";
}
    }
}