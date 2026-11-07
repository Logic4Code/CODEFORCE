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
        int ans = 0;
        vector<long long> a(n), b, c;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans += max(a[i], a[i] * (-1));
            if (a[i] >= 0)
            {
                b.push_back(i);
            }
        }
        int k = 0;
        int m = INT_MIN;

        for (int i = 0; i < n; i++)
        {

            if (k < b.size())
            {
                if (i == b[k])
                {
                    c.push_back(m);
                    c.push_back(a[i]);
                    m = INT_MIN;
                    k++;
                    continue;
                }
            }
            if (a[i] > m)
            {
                m = a[i];
            }
        }
        if (b.size() == 0)
        {
            cout << ans * -1 << endl;
        }

        else
        {
            if (b[b.size() - 1] != n - 1)
            {
                c.push_back(m);
            }

            cout << "BBB" << endl;
            sort(c.begin(), c.end());
            for (int i = 0; i < c.size(); i++)
            {
                if (c.size() % 2 == 0)
                {
                    for (int i = 0; i < c.size() / 2; i++)
                    {
                        ans -= c[i];
                        ans -= c[i];
                    }
                }
                else
                {
                    for (int i = 0; i < (c.size() / 2) + 1; i++)
                    {
                        ans -= c[i];
                        ans -= c[i];
                    }
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}
