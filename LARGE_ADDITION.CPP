#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        int a = 0;
        if (x[0] != '1')
            cout << "NO" << endl;
        else
        {
            for (int i = 1; i < x.size() - 1; i++)
            {
                int digit = x[i] - '0';
                if (digit < 1 || digit > 9)
                {
                    a++;
                }
            }
            int e = x.back() - '0';
            if (e < 0 || e > 8)
            {
                a++;
            }
            if (a > 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
}