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
        long long a = 1;
        long long b = 10000;
        bool ans=false;
        while (a <= b)
        {
            long long cube = (a * a * a) + (b * b * b);
            if (cube == x)
            {
                ans = true;
                break;
            }
            else if (cube < x)
            {
                a++;
            }
            else
            {
                b--;
            }
        }
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}