#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;

        long long k = 0;
        long long ans = 0;

        while (ans < x)
        {
            k++;
            ans += k;
        }
        if (ans - x == 1)
        {
            cout << k + 1 <<endl;
        }
        else
        {
            cout << k << endl;
        }
    }
}