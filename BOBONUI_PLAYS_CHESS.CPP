#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, m, x, y;
    cin >> n >> m >> x >> y;
    cout << x << " " << y << endl;
    for (int i = 1; i <= m; ++i) {
        if (i != y) {
            cout << x << " " << i << endl;
        }
    }
    y = m;
    for (int i = 1; i <= n; ++i) {
        if (i == x) continue; 
        cout << i << " " << y << endl;
        for (int j = 1; j <= m; ++j) {
            if (j == y) continue;
            cout << i << " " << j << endl;
        }
        y = (y == m ? m - 1 : m);
    }
}