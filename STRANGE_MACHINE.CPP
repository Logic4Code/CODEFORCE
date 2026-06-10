#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, s = 0;
        cin >> n >> k;
        string a;
        cin >> a;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'B')
            {
                s = 1;
            }
        }

        long long b[k];
        for (int i = 0; i < k; i++)
        {
            cin >> b[i];
        }
        if (s == 0)
        {
            for (int i = 0; i < k; i++)
            {

                cout << b[i] << endl;
            }
        }
        else
        {
            for (int i = 0; i < k; i++)
            {
                long long p = 0;
                for (int j = 0; j < n; j++)
                {

                    if (a[j] == 'A' && b[i] != 0)
                    {
                        b[i] = b[i] - 1;
                        p++;
                    }
                    if (a[j] == 'B' && b[i] != 0)
                    {
                        b[i] = b[i] / 2;
                        p++;
                    }
                    if (b[i] == 0)
                    {
                        cout << p << endl;
                        break;
                    }
                    if (j == n - 1)
                    {
                        j = -1;
                    }
                }
            }
        }
    }
}
