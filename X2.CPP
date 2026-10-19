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
        vector<int> a(n);
        vector<int> p(n+1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long x = 0;
        p[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            x += a[i - 1];
            p[i] = x % k;
        }
        vector<int> z(k, 0);
        long long ans = 0;
        for (int r = k + 1; r <= n; r++)
        {
            int l = r - k - 1;
            z[p[l]]++;
            ans += z[p[r]];
        }
        cout << ans << "\n";
    }
    return 0;
}