
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, a, b, x, y;
    cin >> t >> a >> b >> x >> y;

    string p;
    cin >> p;
    int ans = 0;
    long long e = (x > a) ? (x - a) : 0;
    long long w = (x < a) ? (a - x) : 0;
    long long n = (y > b) ? (y - b) : 0;
    long long s = (y < b) ? (b - y) : 0;

    for (int i = 0; i < t; ++i)
    {
        if (p[i] == 'E' && e > 0)
            e--;
        if (p[i] == 'W' && w > 0)
            w--;
        if (p[i] == 'N' && n > 0)
            n--;
        if (p[i] == 'S' && s > 0)
            s--;

        if (e == 0 && w == 0 && n == 0 && s == 0)
        {
            ans = i + 1;
            break;
        }
    }
    if (ans != 0)
        cout << ans;
    else
        cout << -1;
}