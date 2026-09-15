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

        vector<int> a(n);
        int c0 = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                c0++;
            }
        }

        if (n == 1)
        {
            cout << (a[0] == 0 ? 0 : -1) << "\n";
        }
        else if (c0 < 2)
        {
            cout << -1 << "\n";
        }
        else
        {
            int ans = (a[0] == 0) + (a[n - 1] == 0);
            cout << (2 - ans) << "\n";
        }
    }
}