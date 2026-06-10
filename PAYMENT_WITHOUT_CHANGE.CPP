#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
long long a, b, n, s;
    cin >> a >> b >> n >> s;

    long long p = min(a, s / n);

    long long q = s - (p * n);

    if (q <= b) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
}
