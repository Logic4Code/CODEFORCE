#include <bits/stdc++.h>
using namespace std;
 
int main()
{
string s, t;
    cin >> s >> t;

    int x1 = s[0] - 'a', y1 = s[1] - '1';
    int x2 = t[0] - 'a', y2 = t[1] - '1';

    int total_moves = max(abs(x1 - x2), abs(y1 - y2));
    cout << total_moves << "\n";

    while (x1 != x2 || y1 != y2) {
        string ans = "";

        if (x1 < x2) {
            ans += "R";
            x1++;
        } else if (x1 > x2) {
            ans += "L";
            x1--;
        }

        if (y1 < y2) {
            ans += "U";
            y1++;
        } else if (y1 > y2) {
            ans += "D";
            y1--;
        }

        cout << ans<<endl;
    }
}