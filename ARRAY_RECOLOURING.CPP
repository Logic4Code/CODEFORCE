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
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (k > 1)
        {
            sort(a.rbegin(), a.rend());
            long long ans = 0;
            for (int i = 0; i <= k; i++)
            {
                ans += a[i];
            }
            cout << ans << "\n";
        }
        else
        {
            long long x = INT_MIN;
            for (int i = 1; i < n; i++)
            {
                x = max(x, a[i]);
            }

            long long y = INT_MIN;
            for (int i = 0; i < n - 1; i++)
            {
                y = max(y, a[i]);
            }

            long long ans = max(a[0] + x, a[n - 1] + y);
            cout << ans << "\n";
        }
    }
    return 0;
}