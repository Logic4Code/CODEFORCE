#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    int n;
    long long x, k;
    cin >> n >> x >> k;
    string s;
    cin >> s;

    long long ans = 0;
    long long p = -1;
    long long q = x;

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'L') q--;
        else q++;

        if (q == 0) {
            p = i + 1;
            break;
        }
    }

    if (p == -1 || k < p) {
        cout << 0 << endl;
    }
else{
    ans = 1;
    k -= p;

    long long r = -1;
    q = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'L') q--;
        else q++;

        if (q == 0) {
            r = i + 1;
            break;
        }
    }
    if (r != -1) {
        ans += (k / r);
    }

    cout << ans << endl;
}
    }
}