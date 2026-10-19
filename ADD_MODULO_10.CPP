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
        bool z = false;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (a[i] % 10 == 5)
            {
                a[i] += 5;
            }
            if (a[i] % 10 == 0)
            {
                z = true;
            }
        }

        if (z)
        {
            bool ans = true;
            for (int i = 1; i < n; ++i)
            {
                if (a[i] != a[0])
                {
                    ans = false;
                    break;
                }
            }
            if (ans)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            for (int i = 0; i < n; ++i)
            {
                while (a[i] % 10 != 2)
                {
                    a[i] += a[i] % 10;
                }
            }

            bool ans = true;
            for (int i = 1; i < n; ++i)
            {
                if (a[i] % 20 != a[0] % 20)
                {
                    ans = false;
                    break;
                }
            }
            if (ans)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}