#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long ans = 0;
    for (int i = 0; i < n / 2; ++i) {
        ans = __gcd(ans, abs(a[i] - a[n - 1 - i]));
    }

    cout << ans << endl;
}
}