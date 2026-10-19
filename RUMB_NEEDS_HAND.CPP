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

        vector<int> p(n + 1);
        vector<int> x;

        for (int i = 1; i <= n; ++i)
        {
            cin >> p[i];
            if (p[i] != i)
            {
                x.push_back(i);
            }
        }

        if (x.empty())
        {
            cout << "YES\n";
        }
        else
        {
            int m = x.size();
            bool ans = true;

            for (int j = 0; j < m; ++j)
            {
                if (p[x[j]] != x[m - 1 - j])
                {
                    ans = false;
                    break;
                }
            }

            if (ans)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}