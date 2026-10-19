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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int x = 0, y = 0;
        int p = 0, q = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                x += a[i];
            }
            else if (a[i] < b[i])
            {
                y += b[i];
            }
            else
            {
                if (a[i] == 1)
                    p++;
                else if (a[i] == -1)
                    q++;
            }
        }

        while (p > 0)
        {
            if (x < y)
                x++;
            else
                y++;
            p--;
        }

        while (q > 0)
        {
            if (x > y)
                x--;
            else
                y--;
            q--;
        }

        cout << min(x, y) << "\n";
    }
    return 0;
}