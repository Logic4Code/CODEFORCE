#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b;
        cin >> n >> b;
        int d = abs(b - n);
        int a = 0;
        if (d == 0)
        {
            a = 1;
        }
        else
        {
            for (long long i = 1; i * i <= d; i++)
            {
                if (d % i == 0)
                {
                    a++;
                }
            }
        }
        cout << a << endl;
        for (int i = 0; i < n; i++)
        {
            cout << 1 << " ";
        }
        for (int i = 0; i < b; i++)
        {
            cout << -1 << " ";
        }
        cout << endl;
    }
}