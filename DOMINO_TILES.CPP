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
        string s;
        cin >> s;
        bool x = true, a = true;
        bool y = true, b = true;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '?')
                continue;
            int z = s[i] - '0';
            int ans = (i / 2) % 2;

            if (i % 2 == 0)
            {
                if (z != ans)
                    x = false;
                if (z != 1 - ans)
                    a = false;
            }
            else
            {
                if (z != ans)
                    y = false;
                if (z != 1 - ans)
                    b = false;
            }
        }
        cout << (x + a) * (y + b) << "\n";
    }
    return 0;
}