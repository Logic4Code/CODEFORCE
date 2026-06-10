#include <bits/stdc++.h>
using namespace std;

int main()
 {
 
int a, b, c, d, e;
    
   cin >> a >> b >> c >> d >> e;
    int ans = a + b + c + d + e;

    if (ans % 5 == 0 && ans > 0) {
        cout << ans / 5 << endl;
    } else {
        cout << -1 << endl;
    }
}