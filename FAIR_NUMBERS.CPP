#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        while (true)
        {
            long long b = n;
            bool ok = true;

            while (b > 0)
            {
                int digit = b % 10;
                if (digit != 0)
                {
                    if (n % digit != 0)
                    {
                        ok = false;
                        break;
                    }
                }
                b /= 10;
            }

            if (ok)
            {
                cout << n << "\n";
                break;
            }
            else
            {
                n++;
            }
        }
    }
}
