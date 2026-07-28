#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        if (n % 2 != 0)
        {
            cout << "NO" << "\n";
        }
        else
        {
            long long p = 1e18;
            long long q = -1e18;
            for (int i = 0; i < n; ++i)
            {
                if (i % 2 == 0)
                {
                    p = min(p, a[i]);
                }
                else
                {
                    q = max(q, a[i]);
                }
            }
            if (p - q >= 2)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}