#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
int a, b, z;
    cin >> a >> b >> z;

    if (a == b) {
      cout<<0<<endl;
    }
else{
    int ans = INT_MAX;

    int p = 0;
    int x = a;

    while (true) {
        int q = 0;
        int y = b;

        while (true) {
            if (x <= y) {
                int c = y - x;
                int d = p + q + c;
                if (d < ans) {
                    ans = d;
                }
            } else {
                int c = x - y;
                int d = p + q + c;
                
                if (d < ans) {
                    ans = d;
                }
            }
            if (y == 0) break;
            y /= z;
            q++;
        }
        if (x == 0) break;
        x /= z;
        p++;
    }

cout <<  ans << endl;
}
    }
}