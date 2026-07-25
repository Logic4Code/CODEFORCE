#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a = 0;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            if (x == -1)
            {
                a++;
            }
        }
        int ans = 0;
        if (a > n / 2)
        {
            int b = a - (n / 2);
            ans += b;
            a -= b;
        }
        if (a % 2 != 0)
        {
            ans += 1;
        }
        cout << ans << endl;
    }
}