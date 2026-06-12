#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << 0 << endl;
        }
        else
        {
            long long x = min(a, b);
            long long y = max(a, b);

            int p = 0;

            while (x < y)
            {
                x *= 2;
                p++;
            }

            if (x != y)
            {
                cout << -1 << endl;
            }
            else
            {
                int ans = p / 3;
                if (p % 3 != 0)
                {
                    ans += 1;
                }

                cout << ans << endl;
            }
        }
    }
}