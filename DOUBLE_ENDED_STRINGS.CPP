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
        string a, b;
        cin >> a >> b;

        int n = a.length();
        int m = b.length();
        int ans = 0;

        for (int j = 1; j <= n; ++j)
        {
            for (int i = 0; i + j <= n; ++i)
            {
                string x = a.substr(i, j);
                if (b.find(x) != string::npos)
                {
                    ans = max(ans, j);
                }
            }
        }

        cout << (n + m - 2 * ans) << "\n";
    }
}