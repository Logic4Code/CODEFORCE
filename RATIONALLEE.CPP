#include <bits/stdc++.h>
using namespace std;
int main()
{
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
        vector<int> w(k);
        for (int i = 0; i < k; i++)
        {
            cin >> w[i];
        }
        sort(a.begin(), a.end());
        sort(w.begin(), w.end());
        long long ans = 0;
        int l = 0;
        int r = n - 1;
        int c1 = 0;
        for (int x : w)
        {
            if (x == 1)
            {
                c1++;
            }
        }
        for (int j = 0; j < c1; j++)
        {
            ans += 2 * a[r];
            r--;
        }
        for (int j = k - 1; j >= c1; j--)
        {
            ans += a[r];
            r--;

            ans += a[l];
            l += (w[j] - 1);
        }

        cout << ans << "\n";
    }
}