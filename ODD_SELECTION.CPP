#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, s = 0, o = 0, e = 0;
        cin >> n >> x;
        vector<int> d(n);
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
            s = s + d[i];
            if (d[i] % 2 == 0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }
        if (o == 0)
        {
            cout << "NO" << endl;
        }

        else if (x == n)
        {
            if (s % 2 != 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            if (e > 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                if (x % 2 != 0)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
}