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
        long long k;
        cin >> n >> k;
        vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin() + 1, a.end());

        int i = 2;
        for (; i <= n; i++)
        {
            long long x = (a[i] - a[i - 1]) * (i - 1);
            if (x <= k)
            {
                k -= x;
            }
            else
            {
                break;
            }
        }

        if (i == n + 1)
        {
            long long l = (a[n] + k / n) * n + (k % n);
            cout << (l - n + 1) << '\n';
        }
        else
        {
            long long l = (a[i - 1] + k / (i - 1)) * n + k % (i - 1) + (n - i + 1);
            cout << (l - n + 1) << '\n';
        }
    }
}