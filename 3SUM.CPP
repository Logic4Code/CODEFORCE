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
        vector<int> c(10, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            c[x % 10]++;
        }

        vector<int> p;
        for (int d = 0; d < 10; d++)
        {
            for (int k = 0; k < min(c[d], 3); k++)
            {
                p.push_back(d);
            }
        }
        int z = 0;
        int m = p.size();
        for (int i = 0; i < m; i++)
        {
            for (int j = i + 1; j < m; j++)
            {
                for (int k = j + 1; k < m; k++)
                {
                    if ((p[i] + p[j] + p[k]) % 10 == 3)
                    {
                        cout << "YES\n";
                        z++;
                        break;
                    }
                }
                if (z > 0)
                    break;
            }
            if (z > 0)
                break;
        }

        if (z == 0)
            cout << "NO\n";
    }
    return 0;
}