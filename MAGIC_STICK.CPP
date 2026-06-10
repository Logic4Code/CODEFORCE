#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;
        if (x == 1)
        {
            if (y == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (x == 2 || x == 3)
        {
            if (y <= 3)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
}