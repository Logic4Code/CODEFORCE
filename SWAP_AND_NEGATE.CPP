#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
        vector<long long> c(n);
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                c[i] = -a[i];
            }
            else
            {
                c[i] = a[i];
            }
        }

        sort(c.begin(), c.end());

        int m = (n + 1) / 2;
        long long ans = 0;

        for (int i = 0; i < m; ++i)
        {
            ans -= c[i];
        }
        for (int i = m; i < n; ++i)
        {
            ans += c[i];
        }

        cout << ans << "\n";
    }
    return 0;
}