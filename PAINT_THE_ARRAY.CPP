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
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        long long g1 = 0;
        long long g2 = 0;

        for (int i = 0; i < n; i += 2)
            g1 = __gcd(g1, a[i]);
        for (int i = 1; i < n; i += 2)
            g2 = __gcd(g2, a[i]);

        bool p = true;
        for (int i = 1; i < n; i += 2)
        {
            if (a[i] % g1 == 0)
            {
                p = false;
                break;
            }
        }
        bool q = true;
        for (int i = 0; i < n; i += 2)
        {
            if (a[i] % g2 == 0)
            {
                q = false;
                break;
            }
        }
        if (p)
        {
            cout << g1 << endl;
        }

        else if (q)
        {
            cout << g2 << endl;
        }
        else
            cout << 0 << endl;
    }
}