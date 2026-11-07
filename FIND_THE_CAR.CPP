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
        int n, k, q;
        cin >> n >> k >> q;

        vector<long long> a(k + 1);
        vector<long long> b(k + 1);

        for (int i = 1; i <= k; ++i)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= k; ++i)
        {
            cin >> b[i];
        }

        while (q--)
        {
            long long d;
            cin >> d;

            int r = 1;
            for (int i = 1; i <= k; ++i)
            {
                if (a[i] > d)
                {
                    r = i;
                    break;
                }
            }

            if (d >= a[k])
            {
                cout << b[k] << " ";
            }
            else
            {
                int l = r - 1;

                long long x = d - a[l];
                long long y = a[r] - a[l];
                long long t = b[r] - b[l];
                long long ans = b[l] + (x * t) / y;
                cout << ans << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}