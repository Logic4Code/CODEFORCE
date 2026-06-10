#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
    cin >> n;
    int count5 = 0, count0 = 0;
      int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 5) count5++;
        else count0++;
    }
     int y = (count5 / 9) * 9;
    if (count0 == 0) {
        cout << -1 ;
    }
    else if (y == 0) {
        cout << 0 ;
    } else {
        for (int i = 0; i < y; i++) {
            cout << 5;
        }
        for (int i = 0; i < count0; i++) {
            cout << 0;
        }
    }
}