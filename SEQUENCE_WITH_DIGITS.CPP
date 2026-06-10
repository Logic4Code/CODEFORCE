#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, k, e = 0;
        cin >> a >> k;
        while (k - 1 > 0)
        {
            long long x = a;
            long long dmin = 9;
            long long dmax = 0;

            while (x > 0)
            {
                long long digit = x % 10;
                if (digit < dmin)
                    dmin = digit;
                if (digit > dmax)
                    dmax = digit;
                x /= 10;
            }

            if (dmin == 0) break;

            a += dmin * dmax;
            k--; 
        }
        cout<<a<<endl;
    }
}