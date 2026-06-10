#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       string x, y;
    cin >> x >> y;

    int n = x.length();
    int a=0;

    for (int i = 0; i < n; ++i) {
        if (x[i] != y[i]) {
            char b = min(x[i], y[i]);
            char c = max(x[i], y[i]);

            if (a==0) {
                x[i] = c;
                y[i] = b;
                a++;
            } else {
                x[i] = b;
                y[i] = c;
            }
        }
    }

    cout << x << endl << y << endl;
}
    }
