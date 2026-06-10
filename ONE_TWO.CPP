#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n ; i++)
        {
            cin >> a[i];
            if (a[i] == 2)
            {
                b++;
            }
        }
        if (b % 2 != 0)
        {
            cout << -1<<endl;
        }
        else if (b == 0)
        {
            cout << 1<<endl;
        }
        else
        {
            int x = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == 2)
                {
                    x++;
                    if (x == b / 2)
                    {
                        cout << i + 1 << endl;
                        break;
                    }
                }
            }
        }
    }
}