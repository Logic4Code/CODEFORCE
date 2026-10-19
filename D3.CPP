#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<pair<long long, long long>> b(n - 4);
        vector<long long> a(n);
        map<long long, long long> m;
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (long long i = 0; i < n - 4; i++)
        {
            b[i].second = i + 1;
            b[i].first = a[i] + a[i + 2] - a[i + 4];
        }
        long long z = 0;
        for (long long i = 0; i < n - 8; i++)
        {
            if (b[i].first == b[i + 4].first)
            {
                z++;
            }
        }
        for (long long i = 0; i < n - 6; i++)
        {
            if (b[i].first == b[i + 2].first)
            {
                z++;
            }
        }

        sort(b.begin(), b.end());
        long long ans = 0;
        long long x = 1;
        long long q = 0;

        for (long long i = 0; i < b.size() - 1; i++)
        {
            if (b[i].first == b[i + 1].first)
            {
                x++;
            }
            else
            {

                long long p = x * (x - 1);
                p /= 2;
                ans += p;
                x = 1;
            }
        }
        long long p = x * (x - 1);
        p /= 2;
        ans += p;

        ans -= z;
        cout << ans << endl;
    }

    return 0;
}