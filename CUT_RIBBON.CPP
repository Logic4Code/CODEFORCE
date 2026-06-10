#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a, b, c;
    cin >> n >> a >> b >> c;
    int a1 = n;
    int ca = 0;
    int ans = 0;
    while (a1 >= 0)
    {
        int b1 = a1;
        int cb = 0;

        while (b1 >= 0)
        {

            if (b1 % c == 0)
            {
                int cc = b1 / c;
                ans = max(ans, ca + cb + cc);
            }

            b1 -= b;
            cb++;
        }
        a1 -= a;
        ca++;
    }
    cout << ans;
}