#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
    cin >> n;

    int x = 0;
    int y = 0;
    bool ans = false;

    for (int i = 0; i < n; ++i) {
        int u, l;
        cin >> u >> l;
        x += u;
        y += l;

        if ((u % 2) != (l % 2)) {
            ans = true;
        }
    }

    if (x % 2 == 0 && y % 2 == 0) {
        cout << 0 << endl;
    } 
    else if (x % 2 != 0 && y % 2 != 0) {
        if (ans) {
            cout << 1 << endl;
        } else {
            cout << -1 << endl;
        }
    } 
    else {
        cout << -1 << endl;
    }
}
