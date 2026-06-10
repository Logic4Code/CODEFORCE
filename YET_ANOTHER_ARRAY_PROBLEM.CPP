#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
 
        long long n, g;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        g = a[0];
 
        for (long long i = 0; i < n; i++)
        {
            g = __gcd(a[i], g);
        }
            long long i = 2;
            while (__gcd(g, i) != 1)
            {
                i++;
            }
            cout << i << endl;
    }
}